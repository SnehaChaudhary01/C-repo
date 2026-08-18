#include <iostream>
using namespace std;
int main()
{
    int a, b, c, largest;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c){
        largest = a;
    }
    else if (b >= a && b >= c){
        largest = b;
    }
    else{
        largest = c;
    }
    cout << "Authored by: Sneha Chaudhary" << endl;
    cout << "The largest number is: " << largest;
    return 0;
}