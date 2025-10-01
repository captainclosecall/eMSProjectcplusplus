#pragma once
#include"Manager.h"
class Leader : public Manager
{
private:

public:
	//unintialized member variables
	std::vector<Manager> managerList = { Manager("jayjay",2) };

	//constructor
	Leader(std::string leaderName,unsigned int leaderId) : Manager(leaderName,leaderId) {}

	//Getter

	//Methods
};

