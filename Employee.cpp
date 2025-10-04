#include "Employee.h"

void Employee::SetName(std::string newName)
{
		this->mName = newName;
}

const void Employee::CheckClockStatus()
{
	if (mClockStatus == true)
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
	if (mClockStatus == true)
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
	if (mClockStatus == false)
	{
		mClockStatus = !mClockStatus;
		ClockStatusChanged();
	}
	else
	{
		CheckClockStatus();
	}
}

void Employee::ClockOut()
{
	if (mClockStatus == true)
	{
		mClockStatus = !mClockStatus;
		ClockStatusChanged();
	}
	else
	{
		CheckClockStatus();
	}
}
