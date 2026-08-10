#include<iostream>
using namespace std;
class Student{
    int age;
    public:
    Student(int a){
        age = a;
        cout << age << endl;
    }

};

int main(){
    Student s1 (19);

    return 0;
}