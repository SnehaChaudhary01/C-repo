#include <iostream>
using namespace std;

class Student{
    int age;
    public:
    Student(int a){
        age = a;
    }
    void display(){
        cout << "Age is =" << age << endl;
    }
};

int main(){
    Student s(19);
    s.display();
    return 0;
}