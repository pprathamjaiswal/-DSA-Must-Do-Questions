#include<iostream>
using namespace std;

int DuplicateArray(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int sum1 = n*(n-1)/2;
    int ans = sum-sum1;
    return ans;
}

int main(){
    int arr [] = {1, 2, 2, 3};
    int num = sizeof(arr)/sizeof(int);
    cout<<DuplicateArray(arr, num)<<" ";
}