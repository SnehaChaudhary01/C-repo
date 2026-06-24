#include<iostream>
using namespace std;
int main(){
    int addition, subtraction, multiplication, division, a, b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    addition = a+b;
    cout<< "Addition =" << addition << '\n';
    subtraction = a-b;
    cout << "Subtraction ="<< subtraction << '\n';
    multiplication = a * b;
    cout << "Multiplication =" << multiplication << '\n';
    division = a/b;
    cout << "Division =" << division << '\n';
    return 0;
}