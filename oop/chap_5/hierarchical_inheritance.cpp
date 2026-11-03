#include <iostream>
using namespace std;

class Vehicle {
    public:
        int speed;
        Vehicle(int s) {
            speed = s;
        }
        void showSpeed() {
            cout << "Speed: " << speed << " km/h" << endl;
        }
};

class Car : public Vehicle {
    public:
        Car(int s) : Vehicle(s) {}
};

class Bike : public Vehicle {
    public:
        Bike(int s) : Vehicle(s) {}
};

class Truck : public Vehicle {
    public:
        Truck(int s) : Vehicle(s) {}
};

int main() {
    Car car(180);
    Bike bike(120);
    Truck truck(90);

    cout << "Three different vehicles, one shared parent (Hierarchical Inheritance)" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    cout << "Car:   ";
    car.showSpeed();

    cout << "Bike:  ";
    bike.showSpeed();

    cout << "Truck: ";
    truck.showSpeed();

    return 0;
}