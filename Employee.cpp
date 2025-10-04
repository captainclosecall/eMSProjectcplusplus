#include "Employee.h"

void Employee::SetName(std::string newName)
{
		this->mName = newName;
}

const void Employee::CheckClockStatus()
{
	if (mClockStatus == true)
	{
		std::cout << mName << " is currently clocked in.\n";
	}
	else
	{
		std::cout << mName << " is currently clocked out.\n";
	}
}

const void Employee::ClockStatusChanged()
{
	time_t epochTime = time(nullptr);
	char humanTime[28];
	struct tm inputBuffer;
	localtime_s(&inputBuffer,&epochTime) ;
	strftime(humanTime, sizeof(humanTime), "%d-%m-%Y %H:%M:%S",&inputBuffer);

	if (mClockStatus == true)
	{
		std::cout << mName << " has been clocked in at " << humanTime << "\n";
		clockInHistory.push_back(std::pair<time_t,std::string>(epochTime, humanTime));
	}
	else
	{
		std::cout << mName << " has been clocked out at " << humanTime << "\n";
		clockOutHistory.push_back(std::pair<time_t,std::string>(epochTime,humanTime));
	}
}

void Employee::ClockIn()
{
	if (mClockStatus == false)
	{
		mClockStatus = !mClockStatus;
		ClockStatusChanged();
	}
	else
	{
		CheckClockStatus();
	}
}

void Employee::ClockOut()
{
	if (mClockStatus == true)
	{
		mClockStatus = !mClockStatus;
		ClockStatusChanged();
	}
	else
	{
		CheckClockStatus();
	}
}

//Function allows user to view all clock ins an clock out
const void Employee::CheckClockStats()
{

	std::cout << "Clock ins:\n";

	for (int i = 0; i < clockInHistory.size();++i)
	{
		std::cout << i + 1 << ". " << clockInHistory[i].second << "\n";
	}

	if (clockInHistory.empty())
	{
		std::cout << "No clock transactions.\n";
	}

	std::cout << "Clock outs:\n";

	for (int i = 0; i < clockOutHistory.size();++i)
	{
		std::cout << i + 1 << ". " << clockOutHistory[i].second << "\n";
	}

	if (clockOutHistory.empty())
	{
		std::cout << "No clock transactions.\n";
	}

	std::cout << "Time worked:\n";
	for (int i = 0; i < clockInHistory.size(); ++i)
	{
		if (clockInHistory.size() == clockOutHistory.size())
		{
			time_t timediff = clockOutHistory[i].first - clockInHistory[i].first;
			time_t hrs = timediff / 3600;
			time_t mins = timediff / 60;
			std::cout << i + 1 << ". " << hrs << "h:" << mins << "m:" << timediff << "s\n";
		}
		else
		{
			std::cout << "Unable to calculate due to missing clock transactions.\n";
		}
	}
}
