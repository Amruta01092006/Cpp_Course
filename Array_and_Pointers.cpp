#include <iostream>
using namespace std;

int main() {
    int marks[4]= {43, 63, 36, 78};

    int mathsMarks[4];
    mathsMarks[0]= 4545;
    mathsMarks[1]= 3767;
    mathsMarks[2]= 866;
    mathsMarks[3]= 4264;
    cout<<"These are the Maths Marks: "<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;

    cout<<"These are the Marks: "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    marks[2]= 455;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

// **************************By For Loop***************************
    // for (int i=0; i<4; i++){
    //     cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    // }

// *************************By While Loop**************************
    // int i = 0;
    // while (i < 4) {
    //     cout << "The value of marks " << i << " is: " << marks[i] << endl;
    //     i++;
    // }

// ************************By Do-While Loop*************************
    int i = 0;
    do{
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;
    }while (i<4);
    cout<<endl;


    //***********************Pointers*******************************
    int*p = marks;
    cout<<*(p+1)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is: "<<*p<<endl;
    // cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;
    
    return 0;
}