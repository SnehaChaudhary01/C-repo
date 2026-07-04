#include<iostream>
using namespace std;
void swapmaxmin(int num[], int size){
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1 ; i < size; i++){
        if (num[i] > num[maxIndex]){
            maxIndex = i;
        }
        if (num[i] < num[minIndex]){
            minIndex = i;
        }
    swap(num[maxIndex], num[minIndex]);
    }
}
int main(){
    int num[] = {1,5,7,4};
    int size = 4;
    swapmaxmin(num, size);
    for(int i = 0; i < size ; i++){
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}