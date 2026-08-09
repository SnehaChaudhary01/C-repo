#include<iostream>
using namespace std;
class Student{
    private:
    int age;

    protected:
    int roll_no;

    public:
    string name;

    void setdata(){
        age = 19;
        roll_no= 101;
        name = "Sneha";
    }

    void display(){
        cout << "Age: "<< age <<endl;
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }

};
int main(){
    Student stu;
    stu.setdata();
    cout << stu.name<< endl;
     return 0;
}