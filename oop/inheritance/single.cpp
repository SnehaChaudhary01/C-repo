#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout << "Animal eats." << endl;
    }
};

class Dog : public Animal{
    public:
    void barks(){
        cout << "Dog barks." << endl;
    }
};

int main(){
    Dog d;
    d.eat();
    d.barks();
    return 0;
}