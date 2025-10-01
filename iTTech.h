//This class is to track all changes made by lower level employees

#pragma once
#include"Administrator.h"
class iTTech : public Administrator
{
private:

public:
	//unintialized member variables
	std::vector<Administrator> adminList = { Administrator("Jayleen",4) };

	//constructor
	iTTech(std::string iTTechName,int iTTechId) : Administrator(iTTechName,iTTechId) {}
};

