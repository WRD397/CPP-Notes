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



// iteration

void fact() {
	int prod = 1, n=0;

	std::cout << "provide the input : ";
	std::cin >> n;
	for (int i=1; i<=n; i++) {
		prod *= i;
	}

	std::cout << prod;

}




int main() {
	fact();
	return 0;
}