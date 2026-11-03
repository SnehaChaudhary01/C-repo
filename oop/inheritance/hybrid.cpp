#include <iostream>
using namespace std;
 
class Person {               // grandparent
public:
    void breathe() { cout << "Person breathes.\n"; }
};
 
class Student : public Person {
public:
    void study() { cout << "Student studies.\n"; }
};
 
class Athlete : public Person {
public:
    void run() { cout << "Athlete runs.\n"; }
};
 
class Scholar : public Student, public Athlete { };
 
int main() {
    Scholar s;
    s.study();   // via Student
    s.run();     // via Athlete
    return 0;
}



