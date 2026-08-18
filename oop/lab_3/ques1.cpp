#include <iostream>
using namespace std;
class Employee
{
private:
    int employeeID;
    string name;
    float salary;

public:
    void input()
    {   
        cout << "Authored by : Sneha Chaudhary" << endl;
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee emp;
    emp.input();
    emp.display();
    return 0;
}