 //function overloading (early binding / compile time polymorphism)
 /*Function overloading means defining multiple functions
  with the same name but different parameters in the same class.
  The parameters may differ in:
Number
Type
Order
*/
#include<iostream>
using namespace std;
class Demo{
    public:
    void show(){
        cout << "Hello" << endl;
    }

    void show(int x){
        cout << "X =" << x << endl;
    }
};

int main(){
    Demo s;
    s.show();
    s.show(20);
    return 0;
}