// eMSProjectcplusplus.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include"Employee.h"
#include"Manager.h"
#include"Leader.h"
#include"iTTech.h"
#include"Utilities.h"

int main()
{
    iTTech IT1("Jayleen Wilson", -1,Utilities::corporate);
    std::vector<iTTech> iTTechlist;
    iTTechlist.push_back(IT1);

    while (true)
    {
        bool loggedIn = true; //A condition parameter to keep user logged into personalized log in screen.
        bool validateLogin = false; // A condition parameter to give user feedback if user ID that is entered does not match any users

        std::cout << "Enter employee ID: ";
        int employeeNum = Utilities::inputValidation();

        for (Employee& cast : IT1.employeeList)
        {
            if (employeeNum == cast.GetEmployeeId())
            {
                validateLogin = true;

                while (loggedIn)
                {
                    std::cout << "Welcome " << cast.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. Check clock stats\n";
                    std::cout << "5. EXIT\n";
                    std::cout << "Please select an option: ";
                    int castMenu = Utilities::inputValidation();

                    switch (castMenu)
                    {
                    case 1:
                        system("cls");
                        cast.CheckClockStatus();
                        break;
                    case 2:
                        system("cls");
                        cast.ClockIn();
                        break;
                    case 3:
                        system("cls");
                        cast.ClockOut();
                        break;
                    case 4:
                        system("cls");
                        cast.CheckClockStats();
                        break;
                    case 5:
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
                validateLogin = true;

                while (loggedIn)
                {
                    std::cout << "Welcome " << mg.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. Check clock stats\n";
                    std::cout << "5. List All Employees\n";
                    std::cout << "6. EXIT\n";
                    std::cout << "Please select an option: ";
                    int managerMenu = Utilities::inputValidation();

                    switch (managerMenu)
                    {
                    case 1:
                        system("cls");
                        mg.CheckClockStatus();
                        break;
                    case 2:
                        system("cls");
                        mg.ClockIn();
                        break;
                    case 3:
                        system("cls");
                        mg.ClockOut();
                        break;
                    case 4:
                        system("cls");
                        mg.CheckClockStats();
                        break;
                    case 5:
                        system("cls");
                        std::cout << "Cast members:\n";
                        mg.listAllEmployees(IT1.employeeList);
                        break;
                    case 6:
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
                validateLogin = true;

                while (loggedIn)
                {
                    std::cout << "Welcome " << lead.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. Check clock stats\n";
                    std::cout << "5. List all Employees\n";
                    std::cout << "6. EXIT\n";
                    std::cout << "Please select an option: ";
                    int leaderMenu = Utilities::inputValidation();
                
                    switch (leaderMenu)
                    {
                    case 1:
                        system("cls");
                        lead.CheckClockStatus();
                        break;
                    case 2:
                        system("cls");
                        lead.ClockIn();
                    case 3:
                        system("cls");
                        lead.ClockOut();
                        break;
                    case 4:
                        lead.CheckClockStats();
                        break;
                    case 5:
                        std::cout << "Cast members:\n";
                        lead.listAllEmployees(IT1.employeeList);
                        std::cout << "Managers:\n";
                        lead.listAllEmployees(IT1.managerList);
                    case 6:
                        loggedIn = false;
                        break;
                    default:
                        std::cout << "Please select a valid option.\n";
                        break;
                    }
                }
            }
        }
                for (Administrator& admin : IT1.adminList)
        {
            if (employeeNum == admin.GetEmployeeId())
            {
                validateLogin = true;

                while (loggedIn)
                {
                    std::cout << "Welcome " << admin.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. Check clock stats\n";
                    std::cout << "5. List all Employees\n";
                    std::cout << "6. EXIT\n";
                    std::cout << "Please select an option: ";
                    int leaderMenu = Utilities::inputValidation();
                
                    switch (leaderMenu)
                    {
                    case 1:
                        system("cls");
                        admin.CheckClockStatus();
                        break;
                    case 2:
                        system("cls");
                        admin.ClockIn();
                    case 3:
                        system("cls");
                        admin.ClockOut();
                        break;
                    case 4:
                        admin.CheckClockStats();
                        break;
                    case 5:
                        std::cout << "Cast Members:\n";
                        admin.listAllEmployees(IT1.employeeList);
                        std::cout << "Managers:\n";
                        admin.listAllEmployees(IT1.managerList);
                        std::cout << "Leaders:\n";
                        admin.listAllEmployees(IT1.leaderList);
                    case 6:
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
                validateLogin = true;

                while (loggedIn)
                {
                    std::cout << "Welcome " << IT.GetName() << "!\n";
                    std::cout << "1. Check clock status\n";
                    std::cout << "2. Clock in\n";
                    std::cout << "3. Clock out\n";
                    std::cout << "4. Check clock stats\n";
                    std::cout << "5. List all employees\n";
                    std::cout << "6. EXIT\n";
                    std::cout << "Please select an option: ";
                    int itMenu = Utilities::inputValidation();

                    switch (itMenu)
                    {
                    case 1:
                        system("cls");
                        IT.CheckClockStatus();
                        break;
                    case 2:
                        system("cls");
                        IT.ClockIn();
                        break;
                    case 3:
                        system("cls");
                        IT.ClockOut();
                        break;
                    case 4:
                        IT.CheckClockStats();
                        break;
                    case 5:
                        std::cout << "Cast members:\n";
                        IT.listAllEmployees(IT1.employeeList);
                        std::cout << "Managers:\n";
                        IT.listAllEmployees(IT1.managerList); 
                        std::cout << "Leaders:\n";
                        IT.listAllEmployees(IT1.leaderList);
                        std::cout << "Administrators:\n";
                        IT.listAllEmployees(IT1.adminList);
                        break;
                    case 6:
                        loggedIn = false;
                        break;
                    default:
                        std::cout << "Please select a valid option.\n";
                        break;
                    }
                }
            }
        }
        //Gives user feedback about the ID they entered
        if (validateLogin == false)
        {
            std::cout << "Please enter valid ID.\n";
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
