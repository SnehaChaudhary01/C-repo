#include<iostream>
using namespace std;
class Bank{
    public:
    int balance;
    public:
    static float rate;
};

float Bank :: rate = 6.7;

int main(){
    Bank b1, b2;
    b1.balance = 10000;
    b2.balance = 20000;
    cout << b1.balance << endl;
    cout << b2.balance << endl;
    cout << Bank :: rate;
    return 0;
}