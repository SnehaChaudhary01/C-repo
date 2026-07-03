#include<iostream>
using namespace std;
int linearsearch(int num[], int size , int target){
    for (int i = 0; i < size; i++){
        if (num[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int num[] = {23,45,78,45,34,12,34};
    int size = 7;
    int target = 30;
    cout << linearsearch(num, size, target)<< endl;

}