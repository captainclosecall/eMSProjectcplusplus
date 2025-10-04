#pragma once
#include"Manager.h"
class Leader : public Manager
{
private:

public:
	//unintialized member variables
	std::vector<Manager> managerList = { Manager("jayjay",2,Utilities::Merchandise) };

	//constructor
	Leader(std::string leaderName,unsigned int leaderId,Utilities::Role leaderRole) : Manager(leaderName,leaderId,leaderRole) {}

	//Getter

	//Methods
};

