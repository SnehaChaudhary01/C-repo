#include<iostream>
using namespace std;
class Student{
    int age;
    public:
    Student(int a){
        age = a;
    }

    Student(Student &s){
        age = s.age;
    }
    void display(){
        cout << "Age is :" << age << endl;
    }
};

int main(){
    Student s1(19);
    Student s2(s1);

    s1.display();
    s2.display();
    return 0;
}