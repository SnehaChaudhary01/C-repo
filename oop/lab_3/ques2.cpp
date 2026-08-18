#include <iostream>
using namespace std;

class Base
{
public:
    int publicMember;

private:
    int privateMember;

protected:
    int protectedMember;

public:
    void setValues()
    {
        privateMember = 20;
        protectedMember = 30;
    }

    void displayPrivate()
    {
        cout << "Private Member: " << privateMember << endl;
    }

    void displayProtected()
    {
        cout << "Protected Member: " << protectedMember << endl;
    }
};

class Derived : public Base
{
public:
    void displayProtectedMember()
    {
        cout << "Protected Member accessed in Derived class: "
             << protectedMember << endl;
    }
};

int main()
{
    Base obj;
    obj.publicMember = 10;
    cout << "Public Member: " << obj.publicMember << endl;
    obj.setValues();
    obj.displayPrivate();
    obj.displayProtected();
    Derived d;
    d.setValues();
    d.displayProtectedMember();
    return 0;
}