/*
Create a simple calculator using if-else.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operation;
    cout<<"Enter the first number";
    cin >> a;
    cout <<"Enter the second number";
    cin >> b;
    cout <<"Enter an operation you want to perform (+ , - , * , / )";
    cin >> operation;
    if (operation == '+'){
        cout<< "Result :" << a+b;
    }
    else if (operation == '-'){
        cout << "Result :" << a-b;

    }
    else if (operation == '*'){
        cout << "Result :" << a*b;
    }
    else (operation == '/');{
        cout << "Result:" << a/b;
    }

    return 0;

}