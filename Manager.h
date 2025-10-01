#pragma once
#include"Employee.h"
#include"vector"

class Manager : public Employee
{
private:

public:
	//unintialized member variables
	std::vector<Employee> employeeList = { Employee("jay",1) };

	//Constructor
	Manager(std::string managerName,unsigned int managerId) : Employee(managerName,managerId) {}
	//Getters
	//Methods
	
};

