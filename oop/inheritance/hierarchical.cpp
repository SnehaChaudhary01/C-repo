#include<iostream>
using namespace std;
class Vechicle{
    public:
    void starts(){
        cout << "Vehicle starts..." << endl;
    }
};

class Car : public Vechicle{
    public:
    void honk (){
        cout << "Beep Beep!" << endl;
    }
};

class Bus : public Vechicle{
    public:
    void ring(){
        cout << "rin rin!" << endl;
    }
};

int main(){
    Car c;
    c.starts();
    c.honk();

    Bus b;
    b.starts();
    b.ring();
}