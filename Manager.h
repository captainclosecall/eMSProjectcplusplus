#pragma once
#include"Employee.h"
#include"vector"

class Manager : public Employee
{
private:

public:
	//unintialized member variables
	std::vector<Employee> employeeList = { Employee("jay",1,Utilities::foodAndBeverage) };

	//Constructor
	Manager(std::string managerName,unsigned int managerId,Utilities::Role managerRole) : Employee(managerName,managerId,managerRole) {}
	//Getters
	//Methods
	
};

