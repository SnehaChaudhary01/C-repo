#include <iostream>
using namespace std;
 
class Animal {
public:
    virtual void speak() { 
    cout << "Some sound.\n"; 
}
};
 
class Dog : public Animal {
public:
    void speak() {
        cout << "Woof!\n"; 
    }
};
 
class Cat : public Animal {
public:
    void speak() {
        cout << "Meow!\n"; 
    }
};
 
int main() {
    Animal* a;
    Dog d;  Cat c;
 
    a = &d;
    a->speak();   // Dog's version
    a = &c;
    a->speak();   // Cat's version
    return 0;
}

