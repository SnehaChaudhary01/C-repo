//using class template.
#include<iostream>
using namespace std;
template < class T >
class arithmetic{
    T a, b;

public:
    arithmetic ( T x, T y){
        a = x;
        b = y;
    }
    T add (){
        return a+b;
    }
    T subtract(){
        return a - b;
    }
    T multiply (){
        return a * b;
    }
    T division (){
        return a / b;
    }
};
int main(){
    arithmetic <int> obj(5,3);
    cout << "Addition :" << obj.add() << endl;
    cout << "Subtraction :" << obj.subtract() << endl;
    cout << "Multiplication:" << obj.multiply() << endl;
    cout << "Division:" <<obj.division() << endl;

    return 0;
}