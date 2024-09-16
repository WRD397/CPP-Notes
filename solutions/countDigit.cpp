#include <stdio.h>
#include <iostream>
//using namespace std;

int digitCounter(int n){

	int counter = 0;
	while (n!=0) {

		n /= 10 ;
		counter ++ ;
	}

	return counter;
}

int main() {
	int n, result;
	//std::cout << "Please provide the integer input : ";
	std::cin >> "Please provide the input : " >> n;
	result = digitCounter(n);
	std::cout << "No of digits in " << n <<" is "<<result;
	return 0;
}