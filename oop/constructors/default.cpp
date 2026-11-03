#include<iostream>
using namespace std;
class Student{
    int age;
    public:
    Student(){
        age = 20;
    }

    void display(){
        cout << "age is:" << age << endl;
    }
};

int main(){
    Student s;
    s.display();
    return 0;
}