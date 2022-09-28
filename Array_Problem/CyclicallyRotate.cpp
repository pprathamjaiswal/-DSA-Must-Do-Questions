#include<iostream>
using namespace std;

void cyclicallyRotate(int *arr, int size){
    for(int i=size-1; i>0; i--){
        swap(arr[i], arr[i-1]);
    }
}

void printCyclicallyRotate(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int num = sizeof(arr)/sizeof(int);

    cyclicallyRotate(arr, num);
    printCyclicallyRotate(arr, num);
}