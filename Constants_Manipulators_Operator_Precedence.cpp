#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //int a = 25;
    char c = 'c';
    //cout<<"The value of a was: "<<a<<endl;
    cout<<"The value of c was: "<<c<<endl;
    //a = 93;
    c = '2';
    //cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of c is: "<<c<<endl;

    //*************************Constants*************************
    const int a=6;
    cout<<"The value of a was: "<<a<<endl;
    //a = 93;
    cout<<"The value of a is: "<<a<<endl;

    //*************************Manipulators**********************
    int x= 3, y= 78, z= 1233;
    cout<<"The value of x without setw is "<<x<<endl;
    cout<<"The value of y without setw is "<<y<<endl;
    cout<<"The value of z without setw is "<<z<<endl;

    cout<<"The value of x is "<<setw(4)<<x<<endl;
    cout<<"The value of y is "<<setw(4)<<y<<endl;
    cout<<"The value of z is "<<setw(4)<<z<<endl;

    //********************Operator Precidence*********************
    int p = 3, q =7;
    // int r = (p*5) + q;
    int r = ((((p*5) + q) - 45) + 67);
    // int r = p*5 + q - 45 + 67;
    // int r = p*5 + q;
    cout<<"The value of r is "<<r<<endl;

    return 0;
}