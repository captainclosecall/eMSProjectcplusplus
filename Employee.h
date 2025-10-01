#pragma once
#include<iostream>

class Employee
{
private:
	//intialized member variables
	std::string mName;
	unsigned int mEmployeeId;

public:
	//Constructor
	Employee(std::string name,unsigned int employeeid) : mName(name), mEmployeeId(employeeid) {}

	//Getters
	std::string GetName() const { return this->mName; }
	unsigned int GetEmployeeId() const { return this->mEmployeeId; }

	//Setters
	void SetName(std::string newName);
	//Methods
};

