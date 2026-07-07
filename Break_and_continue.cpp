#include <iostream>
using namespace std;

int main() {
    //BREAK STATEMENT
    for (int i = 0; i < 4; i++)
    {   
        if(i==2){
              break;
        }
        cout<<i<<endl;
    }
    cout<<endl;

    //CONTINUE STATEMENT
    for (int i = 0; i < 4; i++)
    {   
        if(i==2){
              continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}