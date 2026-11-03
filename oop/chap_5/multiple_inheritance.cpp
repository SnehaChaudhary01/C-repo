#include <iostream>
using namespace std;

class Car {
    public:
        int seats;
        Car(int st) {
            seats = st;
        }
};

class GPS {
    public:
        void navigate() {
            cout << "GPS is showing the fastest route" << endl;
        }
};

class SmartCar : public Car, public GPS {
    public:
        SmartCar(int st) : Car(st) {}

        void showDetails() {
            cout << "Seats: " << seats << endl;
            navigate();
        }
};

int main() {
    SmartCar tesla(4);

    cout << "Details of my SmartCar object (Multiple Inheritance)" << endl;
    cout << "--------------------------------------------------------" << endl;
    tesla.showDetails();

    return 0;
}