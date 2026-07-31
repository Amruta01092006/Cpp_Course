#include <iostream>
using namespace std;

//int product(int a, int b){ 
inline int product(int a, int b){ //inline function is used to reduce the function call overhead. The compiler replaces the function call with the actual code of the function. This is useful for small functions that are called frequently. However, it is not guaranteed that the compiler will inline the function, it is just a request to the compiler.
    // static int c=0;  //Executes only once.
    // c= c+1; //next time the value of c will be retained.
    // return a*b+c;
    return a*b+1;
}

float moneyRecieved(int currentMoney, float factor= 2.55){ //2.55 was default argument. If the user does not provide a value, it will be set to 2.55. If the user provides a value, it will override the default value.
    return currentMoney*factor;
}

int strlen(const char *p){
    int len=0;
    while(*p!='\0'){
        len++;
        p++;
    }
    return len;
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

    int money= 100000;
    cout<<"If u have "<<money<< "Rs in ur account, you will receive "<<moneyRecieved(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If u have "<<money<< "Rs in ur account, you will receive "<<moneyRecieved(money,10)<<"Rs after 1 year"<<endl; //override value
    return 0;
}