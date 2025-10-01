//This class will control changes that Leader will not be in charge of

#pragma once
#include"Leader.h"

class Administrator : public Leader
{
private:
public:
	//unintialized member variables
	std::vector<Leader> leaderList = { Leader("jj",3) };
	//constructor
	Administrator(std::string adminName,unsigned int adminId) : Leader(adminName,adminId) {}

	//Methods
};

