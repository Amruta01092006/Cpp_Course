#include<iostream>
using namespace std;

int glo = 6; //global variable
void sum() {
    int a;
    cout <<glo;
}
int main() {
    int glo = 9; //local variable
    glo = 79; //updating the value of local variable
    // int a= 17;
    // int b= 8;
    int a= 14, b= 8;
    float pi=3.14;
    char c ='a';
    bool is_true = false;
    sum();
    cout <<glo <<is_true;
    // cout << "Lets learn Variables. Here the value of a is "<<a<<" and the value of b is "<<b;
    // cout << "The value of pi is "<<pi;
    // cout << "The value of c is "<<c;
    return 0;
}