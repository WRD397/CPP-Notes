#include <iostream>
#include <vector>
#include <math.h>


// BRUTE FORCE --- 
bool palindromeChecker() {

	int nRaw,n=0, newInt=0, counter=0, remainder=0;

	std::cout << "Please provide the number : ";
	std::cin >> nRaw;
	
	std::cout << "checking ***" << std::endl;
	std::vector<int> digitsStored = {};

	//storing the digits into an array ---
	n = nRaw;
	while (n!=0) {

		remainder = n % 10;
		digitsStored.push_back(remainder);
		n = n/10;
		// digitsStoredremainer*100
		counter ++;
	}

	
	//creating a new integer out of the digits of this array
	std::cout << counter << std::endl;
	counter-=1;
	for (int num : digitsStored) {

		newInt += num*(std::pow(10, counter));
		std::cout << num << " -> " << num*(std::pow(10, counter)) << std::endl;
		counter -= 1 ;

	}
	std::cout << "New integer formed after reversing the array : " << newInt << std::endl;



	if (nRaw==newInt) {
		std::cout << "ITS A PALINDROME !!" << std::endl;
	}
	else {
		std::cout << "ITS NOT A PALINDROME :(" << std::endl;
	}

	return true;
}



bool palindromeChecker2(){
	int nRaw,n=0, newInt=0, counter=0, remainder=0;

	std::cout << "Please provide the number : ";
	std::cin >> nRaw;
	
	std::cout << "checking ***" << std::endl;

	n=nRaw;
	


}



int main() {

	palindromeChecker();
	return 0;
}