#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

string foo(int n){

	if(n==0){
		cout << "loop ends" <<endl;
		return "END COMPLETE";
	}

	cout << "loop is running for n = " << n <<endl;
	cout << "calling function with a reduced argument." <<endl;
	return foo(n-1);

}


int main() {

	foo(5);
	return 0;
}