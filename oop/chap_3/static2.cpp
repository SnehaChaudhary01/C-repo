#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;

    public:
    static int totalstudents;

    Student(string n, int r){
        name = n;
        roll_no = r;
        totalstudents++;
    }

    static void gettotalstudents(){
        cout << "Total students:" << totalstudents << endl;
    }
};

int Student :: totalstudents = 0;
int main(){
    Student s1 ("Ram", 20);
    Student s2 ("Shyam", 21);
    Student s3 ("Hari", 22);
    Student :: gettotalstudents();
    return 0;
}