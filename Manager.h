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
	template <typename t>
	const void listAllEmployees(std::vector<t>& cast)
	{
		for (t& workers : cast)
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