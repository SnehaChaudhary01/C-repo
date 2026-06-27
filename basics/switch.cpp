#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day of a week:";
    cin>>day;
    switch(day){
    case 1:
        cout<<"The day is sunday.";
        break;
    case 2:
        cout<<"The day is monday.";
        break;
    case 3:
        cout<<"The day is tuesday.";
        break;
    case 4:
        cout<<"The day is wednesday.";
        break;
    case 5:
        cout<<"The day is thursday.";
        break;
    case 6:
        cout<<"The day is friday.";
        break;
    case 7:
        cout<<"The day is saturday.";
        break;
    }
    return 0;
}