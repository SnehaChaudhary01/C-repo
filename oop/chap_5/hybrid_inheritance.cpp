#include <iostream>
using namespace std;

class Vehicle {
    public:
        int speed;
        Vehicle(int s) {
            speed = s;
        }
};

class Car : public Vehicle {
    public:
        int seats;
        Car(int s, int st) : Vehicle(s) {
            seats = st;
        }
};

class SportsCar : public Car {
    public:
        int topSpeed;
        SportsCar(int s, int st, int ts) : Car(s, st) {
            topSpeed = ts;
        }

        void showAll() {
            cout << "Speed: " << speed << endl;
            cout << "Seats: " << seats << endl;
            cout << "Top Speed: " << topSpeed << endl;
        }
};

int main() {
    SportsCar ferrari(200, 2, 350);

    cout << "Details of my SportsCar object (Multilevel Inheritance)" << endl;
    cout << "---------------------------------------------------------" << endl;
    ferrari.showAll();

    return 0;
}