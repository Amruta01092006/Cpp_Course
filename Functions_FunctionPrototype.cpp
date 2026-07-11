#include <iostream>
using namespace std;

// int sum(int a, int b){
//     int c= a+b;
//     return c;
// }

// *****************Function Prototype************************
int sum(int a, int b);
int sum(int, int ); //Acceptable
// int sum(int a, b); //Non Acceptable
void g(void); //Function Prototype


int main() {
    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"The sum of the two numbers is: "<<sum(num1, num2)<<endl;
    //num1 and num2 are actual parameters

    g(); //Function call
    return 0;
}

int sum(int a, int b){
    // a and b are formal parameters. They will be taking values from the actual parameters num1 and num2
    int c= a+b;
    return c;
}

void g() {
    cout << "\nHello, Morning" << endl;
}