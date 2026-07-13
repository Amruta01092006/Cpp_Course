#include <iostream>
using namespace std;

//int product(int a, int b){ 
inline int product(int a, int b){ //inline function is used to reduce the function call overhead. The compiler replaces the function call with the actual code of the function. This is useful for small functions that are called frequently. However, it is not guaranteed that the compiler will inline the function, it is just a request to the compiler.
    // static int c=0;  //Executes only once.
    // c= c+1;
    // return a*b+c;
    return a*b+1;
}


int main() {
    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    return 0;
}