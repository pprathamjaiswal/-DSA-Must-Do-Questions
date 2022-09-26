#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return arr[i];
        }
    }
    return 0;
}

int main(){
    int array[100] = { 12, 35, 69, 74, 165, 54};
    int target = 3;
    int ans = linearSearch(array, 6, target);
    if(ans)
    {
        cout<<"Element is Present in Array "<<endl;
    }
    else
    {
        cout<<" Element is Not Present in Array "<<endl;
    }
    return 0;
}