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
	const void CheckClockStatus();
	const void ClockStatusChanged();
	void ClockIn();
	void ClockOut();
};

