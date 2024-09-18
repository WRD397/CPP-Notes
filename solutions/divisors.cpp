#include <iostream>
#include <set>
#include <vector>

// using SET -> this will sort the values automatically in the output set.
void foo() {

	int n=0;
	std::set<int> result;

	std::cout << "Please provide the input : ";
	std::cin >> n;

	if(n<4){
		result.insert(1);
		result.insert(n);
	}
	else {

		for(int i=1; i*i <= n; i++){
			if(n%i==0){
				result.insert(i);
				if(i!=n/i){
					result.insert(n/i);
				}
				
			}
		}

	}

	for(int num : result) {
		std::cout << num << " ";
	}
}

// using Vector -> you need to manually sort the vector
// dont need to sort after the whole list is created, it can be automatically sorted while looping through, first go from 1 to sqrt(n) and then sqrt(n) to 1
void foo2() {

	int n=0;
	std::vector<int> result;

	std::cout << "Please provide the input : ";
	std::cin >> n;

	if(n<4){
		result.push_back(1);
		result.push_back(n);
	}
	else {

		for(int i=1; i*i <= n; i++){
			if(n%i==0){
				result.push_back(i);
				if(i!=n/i){
					result.push_back(n/i);
				}
				
			}
		}

	}


	//sorting 


	for(int num : result) {
		std::cout << num << " ";
	}
}




int main() {
	foo2();
	return 0;
}