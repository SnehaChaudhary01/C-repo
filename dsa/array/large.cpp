#include<iostream>
using namespace std;
int main(){
    int marks[6]= {5, 15, 22, -1, 5, 24};
    int largest = INT_MIN;
    for (int i=0; i < 6 ; i++){
        largest = max(marks[i], largest);
    }
    cout << "largest:" << largest << endl;
    return 0;
}