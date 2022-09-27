#include<iostream>
using namespace std;

void sortArray0s1s2s(int *arr, int n) {
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zeros++;
        }
        if (arr[i]==1){
            ones++;
        }
        if(arr[i]==2){
            twos++;
        }
    }
    for(int i=0; i<zeros; i++){
        arr[i]=0;
    }
    for(int i=zeros; i<(zeros+ones); i++){
        arr[i]=1;
    }
    for(int i=(zeros+ones); i<n; i++){
        arr[i]=2;
    }
}

void printArray(int *array, int num){
    for(int i=0; i<num; i++){
        cout<<array[i];
    }
}

int main(){
    int array[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int num = sizeof(array)/sizeof(int); 
    sortArray0s1s2s(array, num);
    printArray(array, num);
}