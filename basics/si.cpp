#include<iostream>
using namespace std;
int main(){
    int principle,rate,time, simple_interest;
    cout << "Enter the principle:";
    cin >> principle;
    cout << "Enter the rate:";
    cin >> rate;
    cout << "Enter the time:";
    cin >> time;

    if (principle < 0 || rate < 0 || time < 0 ){
        cout << "Negative values are invalid !" << endl;
        cout << "You must enter a positive valid number." << endl;
    }
    else{
        simple_interest = (principle * rate * time)/100;
        cout << "Simple Interest : ";
        cout << simple_interest;
    }
    return 0;
}

