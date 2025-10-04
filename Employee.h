#pragma once
#include<iostream>
#include<vector>
#include"Utilities.h"

class Employee
{
private:
	//intialized member variables
	std::string mName;
	unsigned int mEmployeeId;
	bool mClockStatus;
	Utilities::Role mEmployeeRole;
	

public:
	//unintialized member variables
	std::vector < std::pair<time_t, std::string>> clockInHistory;
	std::vector < std::pair<time_t, std::string>> clockOutHistory;

	//Constructor
	Employee(std::string name,unsigned int employeeid, Utilities::Role employeeRole) 
		: mName(name), mEmployeeId(employeeid),mEmployeeRole(employeeRole),mClockStatus(false) {}

	//Getters
	std::string GetName() const { return this->mName; }
	unsigned int GetEmployeeId() const { return this->mEmployeeId; }
	bool GetClockStatus() const { return this->mClockStatus; }
	Utilities::Role GetRole() const { return mEmployeeRole; }

	//Setters
	void SetName(std::string newName);

	//Methods
	const void CheckClockStatus();
	const void ClockStatusChanged();
	void ClockIn();
	void ClockOut();
	const void CheckClockStats();
	const void PrintRole(Utilities::Role position);
};

