#include<iostream>
using namespace std;
class Student{
    int age;
    public:
    void setage(int a){
        age = a;
    }

    void display(){
        cout << age << endl;
    }

};
int main(){

    Student s1;
    s1.setage(19);
    s1.display();
    return 0;
}