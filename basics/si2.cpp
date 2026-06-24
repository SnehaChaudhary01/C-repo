#include<iostream>
using namespace std;
int main(){
    int principle,rate,time;
    cout<<"Enter the principle:";
    cin>>principle;
    cout<<"Enter the rate:";
    cin>>rate;
    cout<<"Enter the time:";
    cin>>time;
    cout<<"Simple Interest is:"<< (principle*rate*time)/100;
    cout<<"Simple Interest is:"<<endl;
    cout<<(principle*rate*time)/100;
    return 0;
}

