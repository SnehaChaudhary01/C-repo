//error handling in file handling (incase the file we created is deleted)
#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main (){
    ifstream file ("hello.txt");
    string data;
    if (file.is_open()){
        cout << "Data from file:"<< endl;
        cout << "---------------------------------------------" << endl;
        while (getline (file, data)){
            cout << data << endl;
        }
        file.close();
    }
    else{
        cout << "Unable to open the file..." << endl;
    }
    return 0;
}