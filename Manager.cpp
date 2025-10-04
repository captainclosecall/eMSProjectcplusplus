#include "Manager.h"

const void Manager::listAllEmployees(std::vector<Employee> &cast)
{
	std::cout << "Members:\n";
	for (Employee& workers : cast)
	{
		int count = 0;
		count = count +1;
		std::cout << count  << ". Name: " << workers.GetName() << "|ID: " << workers.GetEmployeeId() << "|Role: ";
		workers.PrintRole(workers.GetRole());
		std::cout << "|Clock status: ";
		workers.CheckClockStatus();
	}
}
