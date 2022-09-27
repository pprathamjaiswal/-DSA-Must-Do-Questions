#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaxMin(int *arr, int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    return maxi;
    return mini;
}


int main(){
    int array[10] = {1,2,3,4,5,213};
    int num = sizeof(array)/sizeof(int);

    int ans = MaxMin(array, num);
    cout<<ans<<endl; 
}