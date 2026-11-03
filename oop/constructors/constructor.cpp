#include<iostream>
using namespace std;
class Student{
    int age;

    //default constructor
    public:
    Student(){
        age = 18;
        cout << "Default constructor called" << endl;
    }

    //parametrized constructor

    Student(int a){
        age = a;
        cout << "Parametrized constructor is called" << endl;
    }

    //copy constructor

    Student(Student &s){
        age = s.age;
        cout << "Copy constructor is called" << endl;
    }

    void display(){
        cout << "Age is :" << age << endl;
    }
};

int main(){
    Student s1;
    s1.display();

    Student s2(20);
    s2.display();

    Student s3(s2);
    s3.display();

    return 0;
}