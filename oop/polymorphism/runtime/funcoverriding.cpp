//function overriding(run time)
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Cat c;
    c.sound();

    return 0;
}