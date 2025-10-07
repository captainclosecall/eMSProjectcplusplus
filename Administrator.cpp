#include "Administrator.h"

void Administrator::CreateEmployee(std::vector<Employee>& cast, std::vector<Manager>& mg, std::vector<Leader>& lead)
{
	int employeeCounter = cast.size() + mg.size() + lead.size();
	bool ensureCorrectInput = true; //This will continue loops until correct input is guranteed
	Utilities::Role roleAssignment;
	std::string castName;
	std::string printRank;

	std::cout << "Enter return to go back to menu\n"
		<< "Enter employee name :";

	std::getline(std::cin, castName);

	if ("return" == castName)
	{
		return;
	}

	while (ensureCorrectInput)
	{
		std::cout << "1. Merchandise\n 2. Food and Beverage 3. Tour guide \n 4.Housekeeping\n 5.Corporate\n Please select an option: ";
		int roleSelect = Utilities::inputValidation();

		if (roleSelect == 1)
		{
			roleAssignment = Utilities::Merchandise;
			ensureCorrectInput = false;
		}
		else if (roleSelect == 2)
		{
			roleAssignment == Utilities::foodAndBeverage;
			ensureCorrectInput = false;
		}
		else if (roleSelect == 3)
		{
			roleAssignment = Utilities::tourGuide;
			ensureCorrectInput = false;
		}
		else if (roleSelect == 4)
		{
			roleAssignment = Utilities::houseKeeping;
			ensureCorrectInput = false;
		}
		else if (roleSelect == 5)
		{
			roleAssignment = Utilities::corporate;
			ensureCorrectInput = false;
		}
		else
		{
			std::cout << "Please select a valid option.\n";
		}

	}

	ensureCorrectInput = true;

	employeeCounter = employeeCounter + 1;

	while (ensureCorrectInput)
	{
	std::cout << "1. Employee\n 2.Manager\n 3.Leader\n Please select an option: ";
		int rankSelect = Utilities::inputValidation();

		if (rankSelect == 1)
		{
			cast.push_back(Employee(castName, employeeCounter, roleAssignment));
			ensureCorrectInput = false;
			printRank = "Cast Member";
		}
		else if (rankSelect == 2)
		{
			mg.push_back(Manager(castName, employeeCounter, roleAssignment));
			ensureCorrectInput = false;
			printRank = "Manager";
		}
		else if (rankSelect == 3)
		{
			lead.push_back(Leader(castName, employeeCounter, roleAssignment));
			ensureCorrectInput = false;
			printRank = "Leader";
		}
		else
		{
			std::cout << "please select a valid option.";
		}
	}
	std::cout << castName << " has been added with ID:" << employeeCounter << " as a " << printRank << ".\n";
}
