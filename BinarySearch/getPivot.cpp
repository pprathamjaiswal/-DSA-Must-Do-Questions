#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n){
    int start=0;
    int end = n-1;

    while(start<end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]>=arr[0]){
            start =  mid+1;
        }
        else{
            end = mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
};

int main(){
    int arr[]={3,8,10,17,1};
    int size=sizeof(arr)/sizeof(int);

    cout<<"Pivot is "<<getPivot(arr, size);
}