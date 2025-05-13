#include <iostream>

int main()
{
    char a123 = 'j';
    std::cout << "Hello World" << std::endl;
    std::cout << "next line" << std::endl;
    int a, b;

    std::cout << a123 << std::endl;
    a = 5;
    b = 10;
    short d = 9;
    std::cout << a * b << std::endl;
    // std::cout<<name<<endl*/

    return 0;
}

// to run the program
/* 1. go to the very same directory
 2. g++ .\filename....this will create a software (suppose a.exe)
 3. .\a.exe after pressing enter u will se the output*/
// so basically /* sfsfsf */ is used to multiline comment
//  or install the extension Code Runner then simply press the run button available now at the top right corner.

// or, instead of using std::cout again and again before printing, we can use "using namespace std;" and then cout<<"hello world";