#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Column_sum_Maximum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int colIndex = -1;
    for(int col=0; col<4; col++){
        int sum = 0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
        maxi = max(maxi, sum);
    }
    cout<<"Maximum sum is "<<maxi<<endl;
    return colIndex;
}

int main()
{
    int arr[][4] = {3, 5, 11, 2, 7, 9, 8, 0, 5, 0, 1, 3};
    Column_sum_Maximum(arr, 3, 4);
}