#include<iostream>
using namespace std;
void reversearray(int num[], int size){
    int start = 0, end = size -1;
    while(start < end){
        swap(num[start], num[end]);
        start++;
        end--;
    }
}
int main(){
    int num[] = {11,22,33,44,55,66};
    int size = 6;
    reversearray(num, size);
    for(int i = 0; i < size ; i++){
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}