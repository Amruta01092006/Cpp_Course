#include <iostream>
using namespace std;

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
    return 0;
}