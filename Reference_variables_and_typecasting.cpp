#include<iostream>
using namespace std;

int c = 81;

int main(){
    //******************Build in data types***************
    int a, b, c;
    float d= 34.5f;
    long double e= 34.5l;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;

    //******************LITERALS********************
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;

    cout<<"The size of 34.5 is "<<sizeof(34.5)<<endl;
    cout<<"The size of 34.5f is "<<sizeof(34.5f)<<endl;
    cout<<"The size of 34.5F is "<<sizeof(34.5F)<<endl;
    cout<<"The size of 34.5l is "<<sizeof(34.5l)<<endl;
    cout<<"The size of 34.5L is "<<sizeof(34.5L)<<endl;

    //******************Reference Variables*********************
    //Ex: Amu-----> Amruta
    float x= 7254;
    float &y = x;
    cout<<x<<endl; 
    cout<<y<<endl; 

    //******************Typecasting*********************
    float p = 52.75;
    int q=6;
    cout<<"The value of p is "<<p<<endl;
    cout<<"The value of p is "<<(int)p<<endl;

    int r = float(q);
    cout<<"The value of r is "<<r<<endl;
    cout<<"The expression is "<<p + q<<endl;
    cout<<"The expression is "<<int(p) + q<<endl;
    cout<<"The expression is "<<(int)p + q<<endl;


    return 0;
}