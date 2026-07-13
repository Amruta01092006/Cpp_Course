#include <iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}

//This function will not swap the values of x and y because it is using call by value. The values of x and y are copied into a and b, so any changes made to a and b do not affect x and y.
// void swap(int a, int b){
// int temp;
//     temp = a;  //temp= 5
//     a = b;     //a= 6
//     b = temp;  //b= 5
// }

//********************Call by Reference using Pointers**********************
void swapPointer(int *a, int *b){
    int temp;
    temp = *a;   //temp= 5
    *a = *b;     //a= 6
    *b = temp;   //b= 5
}

//**************Call by Reference using C++ reference variable**************
int /*&*/ swapReferenceVar(int &a, int &b){
    int temp;
    temp = a;   //temp= 5
    a = b;     //a= 6
    b = temp;   //b= 5
    return a;
}

int main() {
    int x= 5, y = 6;
    cout<<"The sum of 5 and 6 is: "<<sum(x, y)<<endl;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
    // swap(x, y); //This will not swap the values of x and y because it is using call by value
    //swapPointer(&x, &y); //This will swap a and b using poimter reference
    swapReferenceVar(x, y);  //= 874  //This will swap a and b using reference variable
    cout<<"The value of x after swapping is: "<<x<<endl;
    cout<<"The value of y after swapping is: "<<y<<endl;
    return 0;
}