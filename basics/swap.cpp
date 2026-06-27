#include<iostream>
using namespace std;
int main(){
    int a,b;
    int temp;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Values before swapping=";
    cout<< a << ",";
    cout<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<< "Values after swapping=";
    cout<<a << ",";
    cout<<b<<endl;
    return 0;
}