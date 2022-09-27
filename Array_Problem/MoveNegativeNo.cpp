#include<iostream>
using namespace std;

void negativeNoMove(int *arr, int size){
    int j=0;
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            if(i != j){
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

void printArray(int *array, int num){
    for(int i=0; i<num; i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int array[] = {1, -4, -2, 5, 3};
    int num = sizeof(array)/sizeof(int);
    negativeNoMove(array, num);
    printArray(array, num);
}