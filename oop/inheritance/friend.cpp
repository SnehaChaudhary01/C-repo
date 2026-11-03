#include<iostream>
using namespace std;
class Bank{
    private:
    double balance;
    public:
    Bank (double b){
        balance = b;
    }
    friend void show (Bank b);
};
void show (Bank b){
    cout << "Balance is Rs." << b.balance << endl;
}
int main(){
    Bank acc (50000);
    show(acc);
    return 0;
}