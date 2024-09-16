#include <iostream>
#include <limits>
/* It will check if the user has provide an Integer input or not.
If not, it will again ask for the correct input.
*/
// If its float, it will NOT FAIL and automatically printing the integer part from the float. DONT KNOW HOW TO HANDLE THIS.

int foo1() {
	int n;
	bool validInput=false;

	while (!validInput) {

		std::cout << "Please provide the Integer Input : ";
		std::cin >> n;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cout << "Invalid input. Please provide a valid Input." << std::endl;
		}

		else {
			validInput=true;
		}

	}

	std::cout << "Provided integer is : " << n << std::endl;

	return 0;

}


int foo2 () {
	int n;

	// Taking input from the user 
	std::cout << "Please provide the integer : ";
	while(!(std::cin >> n)) {
		std::cout << "Invalid input. Please provide the correct input ! " << std::endl;
		std::cout << "Please provide the integer : ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}


	// Printing the input
	std::cout << std::endl << "Provided integer is : " << n << std::endl;

	return 0;
}




int main() {

	foo2();
	return 0;

}