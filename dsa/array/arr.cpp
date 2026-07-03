#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Enter the marks:";
    for(int i=0; i<5 ;i++){
        
        cin >> marks[i];
    }

    for(int i=0; i<5 ;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}