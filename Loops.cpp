#include<iostream>
using namespace std;

int main(){
    //*********************Loops************************
    
    //For Loop
    for(int i=0; i<=6; i++){
        cout<<i<<endl;
    }
    cout<<endl;
    // for(int i=0; 32<=52; i++){        //Infinite Loop
    //     cout<<i<<endl;
    // }

    //While Loop
    int i = 0;
    while(i <= 40){
        cout<<i<<endl;
        i++;
    }
    cout<<endl;
    
    // while(true){        //Infinite Loop
    //     cout<<i<<endl;
    //     i++;
    // }

    //Do While Loop
    int j = 0;
    do{
        cout<<j<<endl;
        j++;
    }while(j<= 22);

    // do{
    //     cout<<j<<endl;
    //     j++;
    // }while(false);


    return 0;
}