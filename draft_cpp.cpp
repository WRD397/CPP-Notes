#include <iostream>
using namespace std;

void test()
{
	float score;
	cout << "Please provide your score here: "<<endl;
	cin >> score;
	cout << "Your score as mentioned is as below." << endl << score;

}


void marks()
{
	int i;
	float marks[6], sum = 0, avg;
	
	cout << "Enter the marks of i-th student below" >> endl;
	for(i=0; i<6; i++)
	{	
		cin >> 	marks[i] >> endl;
	}
	cout << "The marks you have entered are as belows..." << endl;
	for (i=0; i<6; i++)
	{
		cout << to_string(marks[i]) << " ";		
	}
	
	
	// Calculating the average
	
	for (i=0; i <6; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum / 6 ;
	
	cout endl << "and the averaeg is " << avg << endl;
}


int main()
{
char nl3[] = "\n\n\n";
cout << endl;	
cout << "Hey there!!"<<endl<<endl;
	
	marks();



cout << nl3;
return 0;
}
