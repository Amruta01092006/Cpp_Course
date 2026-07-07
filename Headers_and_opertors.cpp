// There are 2 types of headers in C++:
// 1. System headers (provided by the compiler)
#include<iostream>
// 2. User-defined headers
// #include"this.h" // this.h is a user-defined header file

using namespace std;

int main(){
    int a= 14, b= 8;
    cout<<"Headers and Operators in C++:"<<endl;
    cout<<"Following are types in C++:"<<endl;
    cout<<endl;

    cout<<"1. Arithmetic Operators: +, -, *, /, %" <<endl;
    cout<< "The value of a+b is "<<a+b<<endl;
    cout<< "The value of a-b is "<<a-b<<endl;
    cout<< "The value of a*b is "<<a*b<<endl;
    cout<< "The value of a/b is "<<a/b<<endl;   
    cout<< "The value of a%b is "<<a%b<<endl;
    cout<< "The value of a++ is "<<a++<<endl;
    cout<< "The value of a-- is "<<a--<<endl;
    cout<< "The value of ++a is "<<++a<<endl;
    cout<<endl;


    cout<<"2. Assignment Operators:" <<endl; //used to assign values to variables
    int d=4, e=7;
    char c='c';
    cout<<endl;

    cout<<"3. Comparision Operators:" <<endl; //used to compare values to variables
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    cout<<"4. Logical Operators:" <<endl; 
    cout<<"The value of (a==b) && (a<b) is "<<((a==b) && (a<b))<<endl; //And Operator
    cout<<"The value of (a==b) || (a<b) is "<<((a==b) || (a<b))<<endl; //Or Operator
    cout<<"The value of !(a==b) is "<<!(a==b)<<endl; //Not Operator
    cout<<endl;

    return 0;
}