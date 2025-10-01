#include "Employee.h"

void Employee::SetName(std::string newName)
{
		this->mName = newName;
}

const void Employee::CheckClockStatus()
{
	if (clockStatus == true)
	{
		std::cout << mName << " is currently clocked in.\n";
	}
	else
	{
		std::cout << mName << " is currently clocked out.\n";
	}
}

const void Employee::ClockStatusChanged()
{
	if (clockStatus == true)
	{
		std::cout << mName << " has been clocked in.\n";
	}
	else
	{
		std::cout << mName << " has been clocked out.\n";
	}
}

void Employee::ClockIn()
{
	if (clockStatus == false)
	{
		clockStatus = !clockStatus;
		ClockStatusChanged();
	}
	else
	{
		CheckClockStatus();
	}
}

void Employee::ClockOut()
{
	if (clockStatus == true)
	{
		clockStatus = !clockStatus;
		ClockStatusChanged();
	}
	else
	{
		CheckClockStatus();
	}
}
