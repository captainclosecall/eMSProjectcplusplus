#include "Utilities.h"
#include<string>

//Figure out how to make sure all characters are checked instead of only the first on f1 doesnt work but 1f does neither should work only 1.
//Commit message : Ensuring proper user input and communicating with users about errors in input they provide.


//This function ensures that when user is prompted for integer only integers are accepted.
int Utilities::inputValidation()
{
	  std::string input;
        std::getline(std::cin, input); //The first time the function is executed getline ask for user input for the variable input. but the next time getline fills the input variable with an empty string and does not ask for user input why so?

        // Check for empty input
        if (input.empty()) {
            std::cout << "Please enter a valid integer number: ";
        }

        //If the first element of the string is equal to "-" the for loop intializer is 1 inteaed of 0
        size_t start = 0;
        if (input[0] == '-') start = 1;
        bool valid = (start < input.size()); // Ensures that more than '-' was entered.

        for (start; start < input.size(); ++start) {
            if (!std::isdigit(input[start])) {
                valid = false;
                continue;
            }
        }

        if (valid) {
            // Now safely convert to integer
            return std::stoi(input);
        }
        else {
            std::cout << "Please enter a valid integer number\n";
        }
}
