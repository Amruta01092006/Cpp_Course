#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<< "Enter the value of num1\n "; //<< This is called insertion operator
    cin>> // >> This is called extraction operator
    num1;

    cout<< "Enter the value of num2\n ";
    cin>> // >> This is called extraction operator
    num2;

    cout<< "The sum of num1 and num2 is "<<num1+num2;
    return 0;
}
