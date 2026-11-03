#include<iostream>
using namespace std;
template <class T>
T greatest (T a, T b, T c){
    if (a > b && b> c){
        return a;
    }
    else if ( b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a , b , c;
    cout << "Enter any three numbers:" << endl;
    cin >> a >> b >> c;
    cout << "Greatest is:" << greatest(a, b, c) << endl;
    return 0;
}
