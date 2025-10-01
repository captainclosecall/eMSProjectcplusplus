#pragma once
#include<iostream>

class Employee
{
private:
	//intialized member variables
	std::string mName;
	unsigned int mEmployeeId;
	bool clockStatus;

public:
	//Constructor
	Employee(std::string name,unsigned int employeeid) : mName(name), mEmployeeId(employeeid), clockStatus(false) {}

	//Getters
	std::string GetName() const { return this->mName; }
	unsigned int GetEmployeeId() const { return this->mEmployeeId; }
	bool GetClockStatus() const { return this->clockStatus; }

	//Setters
	void SetName(std::string newName);

	//Methods
	const void CheckClockStatus()
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

	const void ClockStatusChanged()
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

	void ClockIn()
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

	void ClockOut()
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
};

