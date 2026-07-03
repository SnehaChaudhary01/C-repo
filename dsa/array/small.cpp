#include<iostream>
using namespace std;
int main(){
    int marks[6]= {5, 15, 22, -1, 5, 24};

    int smallest = INT_MAX;
    for (int i=0; i < 6 ; i++){
        if (marks[i] < smallest){
           smallest = marks[i];
        }
    }
    cout << "Smallest:" << smallest<< endl;
    return 0;
}
