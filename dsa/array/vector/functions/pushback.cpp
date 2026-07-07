#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    cout << "size:" << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    cout << "Size after push back:" << vec.size() << endl; 
    for(int value : vec ){
        cout <<  "Value :" <<value << endl;
    }
    return 0;
}