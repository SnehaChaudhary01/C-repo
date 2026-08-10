#include<iostream>
using namespace std;
class Student{
    int roll;
    public:
    Student (int r){
        roll = r;
        cout << roll << endl;
    }
};

int main(){
    Student s1(101), s2(191);
    return 0;
}