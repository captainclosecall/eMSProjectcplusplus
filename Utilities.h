#pragma once
#include<iostream>
struct Utilities
{
	static enum Role
	{
		noRole,
		Merchandise,
		foodAndBeverage,
		tourGuide,
		houseKeeping,
		corporate
	};

	static int inputValidation();
};