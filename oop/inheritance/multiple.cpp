#include <iostream>
using namespace std;
class Teacher {
    public: 
    void teach (){
        cout << "Teaches in class" << endl;
    }
};

class Player{
    public:
    void plays(){
        cout << "Plays games" << endl;
    }
};

class Student : public Teacher, public Player {

};

int main (){
    Student s;
    s.teach();
    s.plays();
    return 0;

}