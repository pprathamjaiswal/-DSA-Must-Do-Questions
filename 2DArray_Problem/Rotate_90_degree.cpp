#include <bits/stdc++.h>
using namespace std;

void rotateby90(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0; i<row/2; i++){
        for(int j=0; j<row; j++){
            swap(arr[i][j], arr[row-i-1][j]);
        }
    }
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotateby90(arr, 3, 4);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}