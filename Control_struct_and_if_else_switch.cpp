#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to demonstrate control structures and if-else and switch statements"<<endl;
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    //Selection control structure: if-else ladder statement
    if((age >= 18) && (age >= 0)){
        cout<<"You can attend the party"<<endl;
    }
    else if(age == 18){
        cout<<"You are a kid and will get kid pass"<<endl;
    }
    else if(age <= 0){
        cout<<"You do not exist try again after being born"<<endl;
    }
    else{
        cout<<"You cannot attend the party"<<endl;
    }

    //Selection control structure: switch case statement
    switch(age){
        case 18:
            cout<<"You are a kid and will get kid pass"<<endl;
            break;
        case 21:
            cout<<"You are an adult and will get adult pass"<<endl;
            break;
        case 25:
            cout<<"You are a senior citizen and will get senior citizen pass"<<endl;
            break;
        default:
            cout<<"You do not have any special pass"<<endl;
    }

    return 0;
}