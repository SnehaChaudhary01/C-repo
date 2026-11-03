#include<iostream>
using namespace std;
class GrandFather{
    public:
    void farm(){
        cout << "GrandFather farms." << endl;
    }
};

class Father : public GrandFather{
    public:
    void work(){
        cout << "Father works." << endl;
    }
};

class Son : public Father{
    public:
    void study(){
        cout << "Son studies." << endl;
    }
};

int main(){
    Son s;
    s.farm();
    s.study();
    s.work();
    return 0;
}

