/*-----------Moore's Voting Algorithm--------------*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(int *arr, int n){
    int result = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(count == 0) {
            result = arr[i];
        }
        if(result == arr[i]) {
            count ++;
        }
        else {
            count--;
        }
    }
    count = 0;
    for(int i=0; i<n; i++){
        if(result == arr[i]){
            count++;
        }
    }
    if(count > n/2){
        return result;
    }
    return -1;
}

int main () {
    int arr[] = {3,1,3,3,2};
    int num = sizeof(arr)/sizeof(int);
    cout<<majorityElement(arr, num)<<" ";
}