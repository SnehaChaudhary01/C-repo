//to find area of a circle
#include<iostream>
using namespace std;
int main(){
    const float pi = 3.14;
    float radius;
    int area;
    cout<<"Enter the radius of a circle:";
    cin >> radius;
    area = pi * radius *radius;
    cout<< "The area of a circle is : " ;
    cout <<  area;
    return 0;
}