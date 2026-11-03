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
        int seats;

        Car(int s, int st) : Vehicle(s) {
            seats = st;
        }

        void showDetails() {
            showSpeed();
            cout << "Seats: " << seats << endl;
        }
};

int main() {
    Car myCar(180, 5);

    cout << "Details of my Car object (Single Inheritance)" << endl;
    cout << "----------------------------------------------" << endl;
    myCar.showDetails();

    return 0;
}