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
	template <typename a>
	const void listAllEmployees(std::vector<a>& cast)
	{
		for (a& workers : cast)
		{
			int count = 0;
			count = count + 1;
			std::cout << count << ". Name: " << workers.GetName() << "|ID: " << workers.GetEmployeeId() << "|Role: ";
			workers.PrintRole(workers.GetRole());
			std::cout << "|Clock status: ";
			workers.CheckClockStatus();
		}
	}
	
};