#include<iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file ("hello.txt");
    file << "Hello my name is Sneha Chaudhary" << endl;
    file << "I love watching movies" << endl;
    file << "I am a Bsc csit student at Butwal Multiple Campus" << endl;
    file << "Thank you." << endl;
    file.close();
    cout << "Data successfully written to the file";
    return 0;
}