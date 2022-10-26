#include<iostream>
using namespace std;

bool Search(int arr[4][2], int target, int row, int col ){
    for(int i=0;i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[4][2] = {1, 2, 4, 5, 9, 10, 11};
    int target = 11;

    cout<< "Searing the target"<< Search(arr, 11, 4, 2)<<endl;
}