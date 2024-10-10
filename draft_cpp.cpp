#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

void test() {

	vector<int> res;
	res.push_back(88345348);
	res.push_back(7895);
	res.push_back(576);
	res.push_back(231);
	res.push_back(112323);
	res.push_back(5332);
	res.push_back(234);
	//cout<<res[0]<<endl;
	cout<< sizeof(res)/sizeof(res[0]) <<endl;

}


// void marks()
// {
// 	int i;
// 	float marks[6], sum = 0, avg;
	
// 	cout << "Enter the marks of i-th student below" >> endl;
// 	for(i=0; i<6; i++)
// 	{	
// 		cin >> 	marks[i] >> endl;
// 	}
// 	cout << "The marks you have entered are as belows..." << endl;
// 	for (i=0; i<6; i++)
// 	{
// 		cout << to_string(marks[i]) << " ";		
// 	}
	
	
// 	// Calculating the average
	
// 	for (i=0; i <6; i++)
// 	{
// 		sum = sum + marks[i];
// 	}
// 	avg = sum / 6 ;
	
// 	cout endl << "and the averaeg is " << avg << endl;
// }


int main() {
// char nl3[] = "\n\n\n";
// cout << endl;	
// cout << "Hey there!!"<<endl<<endl;
	
test();



// cout << nl3;
return 0;
}