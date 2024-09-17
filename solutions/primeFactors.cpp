#include <iostream>
#include <vector>

void foo() {
	int n=0;
	std::vector<int> v;
	std::cout << "provide the input";
	std::cin >> n;

	for(int i=2; i*i<n; i++){
		if(n%i==0){
			std::cout << n <<std::endl;
			v.push_back(i);
			n /= i;
			i -= 1;
		}
		else {
			for(int num:v){
				std::cout << num << " ";
			}
		}
	}
	for(int num:v){
				std::cout << num << " ";
			}



}


int main() {

	foo();
	return 0;
}