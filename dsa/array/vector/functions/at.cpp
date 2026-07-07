#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    cout << "Size after push back:" << vec.size() << endl;
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;
    return 0;
}