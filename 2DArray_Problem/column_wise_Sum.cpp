#include <iostream>
using namespace std;

void ColumnSum(int arr[][4], int row, int col)
{
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
}

int main()
{
    int arr[][4] = {3,5,11,2,7,9,8,0,5,0,1,3};

    // cout << "Printing the array " << 
    ColumnSum(arr,3,4);
}