/*
return all the prime numbers till N

*/

//Use "Sieve of Eratosthenes" to solve this


// aproach 2 - this one is wrong - because for example - 121, it neither multiple of 2 nor 3 nor 5. so the script will return this number as well, even though its not a prime number. 
#include <iostream>
#include <vector>

void foo(){
	int n=0;
	std::vector<int> result;
	std::cout << "Please provide an input : ";
	std::cin >> n;

	for(int i=2; i<n; i++) {
		if (i==2||i==3||i==5){
			result.push_back(i);
		}
		else {
			if(i%2!=0 && i%3!=0 && i%5!=0){
				result.push_back(i);
			}

		}

	}

	for(int num:result){
		std::cout << num << " ";
	}

}



int main() {
	foo();
	return 0;
}