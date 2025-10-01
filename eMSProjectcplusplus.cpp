// eMSProjectcplusplus.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include"Employee.h"
#include"Manager.h"
#include"Leader.h"
#include"iTTech.h"

int main()
{
    iTTech IT1("Jayleen Wilson", -1);
    std::vector<iTTech> iTTechlist;
    iTTechlist.push_back(IT1);


    while (true)
    {
        bool loggedIn = true;
        unsigned int employeeLogInMenu;
        std::cout << "Enter employee ID: ";

        int employeeNum;

        std::cin >> employeeNum;

        for (Employee& cast : IT1.employeeList)
        {
            if (employeeNum == cast.GetEmployeeId())
            {
                while (loggedIn == true)
                {
                    std::cout << "Welcome " << cast.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. EXIT\n";
                    std::cout << "Please select an option: ";
                    std::cin >> employeeLogInMenu;

                    switch (employeeLogInMenu)
                    {
                    case 1:
                        cast.CheckClockStatus();
                        system("cls");
                        break;
                    case 2:
                        cast.ClockIn();
                        system("cls");
                        break;
                    case 3:
                        cast.ClockOut();
                        system("cls");
                        break;
                    case 4:
                        loggedIn = false;
                        break;
                    default:
                        std::cout << "Please select a valid option.\n";
                        break;
                    }
                }
            }
        }

        for (Manager& mg : IT1.managerList)
        {
            if (employeeNum == mg.GetEmployeeId())
            {
                while (loggedIn == true)
                {
                    std::cout << "Welcome " << mg.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. EXIT\n";
                    std::cout << "Please select an option: ";
                    std::cin >> employeeLogInMenu;

                    switch (employeeLogInMenu)
                    {
                    case 1:
                        mg.CheckClockStatus();
                        system("cls");
                        break;
                    case 2:
                        mg.ClockIn();
                        system("cls");
                        break;
                    case 3:
                        mg.ClockOut();
                        system("cls");
                        break;
                    case 4:
                        loggedIn = false;
                        break;
                    default:
                        std::cout << "Please select a valid option.\n";
                        break;

                    }
                }
            }
        }

        for (Leader& lead : IT1.leaderList)
        {
            if (employeeNum == lead.GetEmployeeId())
            {
                while (loggedIn == false)
                {
                    std::cout << "Welcome " << lead.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. EXIT\n";
                    std::cout << "Please select an option: ";
                    std::cin >> employeeLogInMenu;

                    switch (employeeLogInMenu)
                    {
                    case 1:
                        lead.CheckClockStatus();
                        system("cls");
                        break;
                    case 2:
                        lead.ClockIn();
                        system("cls");
                    case 3:
                        lead.ClockOut();
                        system("cls");
                        break;
                    case 4:
                        loggedIn = false;
                        break;
                    default:
                        std::cout << "Please select a valid option.\n";
                        break;
                    }
                }
            }
        }

        for (iTTech& IT : iTTechlist)
        {
            if (employeeNum == IT.GetEmployeeId())
            {
                while (loggedIn == true)
                {
                    std::cout << "Welcome " << IT.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. EXIT\n";
                    std::cout << "Please select an option: ";
                    std::cin >> employeeLogInMenu;

                    switch (employeeLogInMenu)
                    {
                    case 1:
                        IT.CheckClockStatus();
                        system("cls");
                        break;
                    case 2:
                        IT.ClockIn();
                        system("cls");
                        break;
                    case 3:
                        IT.ClockOut();
                        system("cls");
                        break;
                    case 4:
                        loggedIn = false;
                        break;
                    default:
                        std::cout << "Please select a valid option.\n";
                        break;
                    }
                }
            }
        }
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
