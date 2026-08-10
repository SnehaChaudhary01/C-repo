#include<iostream>
using namespace std;
class Student{
    int roll;
    public:
    Student(){
        roll = 101;
        cout << roll << endl;
    }
};

int main(){

    Student s1;
    return 0;
}