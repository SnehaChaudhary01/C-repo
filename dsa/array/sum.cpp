#include<iostream>
using namespace std;
int sumprodarr(int arr[], int size, int &sum, int &prod){
    sum = 0;
    prod = 1;
    for(int i = 0; i < size ; i++){
        sum += arr[i]; 
        prod *= arr[i];
    }
    return sum, prod;
}
int main(){
    int arr[] = {1,4,5,6};
    int size = 4;
    int sum, prod;
    sumprodarr(arr, size, sum, prod);
    cout<< sum << endl;
    cout<< prod << endl;
    return 0;
}