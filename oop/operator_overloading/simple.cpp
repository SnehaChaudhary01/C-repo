#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    void get()
    {
        cout << "Enter number: ";
        cin >> x;
    }

    Number operator+(Number n)
    {
        Number temp;
        temp.x = x + n.x;
        return temp;
    }

    void display()
    {
        cout << "Sum = " << x << endl;
    }
};

int main()
{
    Number n1, n2, n3;

    n1.get();
    n2.get();

    n3 = n1 + n2;

    n3.display();

    return 0;
}