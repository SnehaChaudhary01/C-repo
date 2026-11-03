#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream file ("hello.txt");
    string data;
    cout << "Data from the file : " <<endl;
    while (getline(file, data)){
        cout << data << endl;
    }
    file.close();
    return 0;
}