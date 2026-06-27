#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    if (a>b && a>c){
        cout<<"Largest number is:"<<a;
    }
    else if (b>a && b>c)
    {
        cout<<"Largest number is:"<<b;
    }
    else{
        cout<<"Largest number is:"<<c;
    }
    return 0;
}