#include <iostream>


// through Recursion ::

int factorial(int num) {

	int fact=0;

	if (num < 2) {
		return 1;
	}

	fact = num * factorial(num - 1);

	return fact; 
}

void foo() {

	int n=0, result=0;

	std::cout << "Please provide the number : " ;
	std::cin >> n ;

	result = factorial(n);

	std::cout << result << std::endl;

}


int main() {
	foo();
	return 0;
}


//