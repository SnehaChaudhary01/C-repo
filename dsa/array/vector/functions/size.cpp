#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <char> vec = { 'a', 'b', 'c','d','e'};
    cout << "size:" << vec.size() << endl;
    for(char value : vec ){
        cout << value << endl;
    }
    return 0;
}