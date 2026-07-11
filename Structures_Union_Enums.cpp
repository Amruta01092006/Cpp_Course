#include <iostream>
using namespace std;


//*****************STRUCTURE**************** 
typedef struct Employee {
    char FavBoss;
    int EmployeeId;
    float salary;
} ep;

int main() {

    ep e1;
    ep e2;
    ep e3;
    // struct Employee e1;
    // struct Employee e2;
    // struct Employee e3;
    e1.EmployeeId = 123;
    e1.salary = 500000.0;
    e1.FavBoss = 'A';
    cout << "Employee ID: " << e1.EmployeeId << endl;
    cout << "Salary: " << e1.salary << endl;
    cout << "Favorite Boss: " << e1.FavBoss << endl;

//***********************UNION*************************
union Money {
    int rice;
    char car;
    float pounds;
};

    union Money m1;
    m1.rice = 34;
    m1.car = 'B';
    m1.pounds = 50.5;
    cout << "The value of rice is: " << m1.rice << endl;
    cout << "The value of car is: " << m1.car << endl;
    cout << "The value of pounds is: " << m1.pounds << endl;

//***********************ENUM*************************
enum Meal { breakfast, lunch, dinner };
    cout << "The value of breakfast is: " << breakfast << endl;
    cout << "The value of lunch is: " << lunch << endl;
    cout << "The value of dinner is: " << dinner << endl;

    return 0;
}