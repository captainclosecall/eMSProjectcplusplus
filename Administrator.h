//This class will control changes that Leader will not be in charge of

#pragma once
#include"Leader.h"
#include"Utilities.h"
#include"string"

class Administrator : public Leader
{
private:
public:
	//unintialized member variables
	std::vector<Leader> leaderList = { Leader("jj",3,Utilities::corporate) };
	//constructor
	Administrator(std::string adminName,unsigned int adminId,Utilities::Role adminRole) : Leader(adminName,adminId,adminRole) {}

	//Methods
	void CreateEmployee(std::vector<Employee>& cast, std::vector<Manager>& mg, std::vector<Leader>& lead);
};

