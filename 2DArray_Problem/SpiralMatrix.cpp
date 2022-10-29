#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> SpiralOrder(int arr[3][3], int row, int col)
{
    vector<int> ans;
    int start_Row = 0;
    int end_Row = row - 1;
    int left_col = 0;
    int Right_col = col - 1;

    while (start_Row <= end_Row && left_col <= Right_col)
    {
        for (int i = left_col; i <= Right_col; i++)
        {
            ans.push_back(arr[start_Row][i]);
        }
        start_Row++;
        for (int i = start_Row; i <= end_Row; i++)
        {
            ans.push_back(arr[i][Right_col]);
        }
        Right_col--;
        if (start_Row <= end_Row)
        {
            for (int i = Right_col; i >= left_col; i--)
            {
                ans.push_back(arr[end_Row][i]);
            }
            end_Row--;
        }
        if (left_col <= Right_col)
        {
            for (int i = end_Row; i >= start_Row; i--)
            {
                ans.push_back(arr[i][left_col]);
            }
            left_col++;
        }
    }
    return ans;
}

int main()
{
    int matrix[3][3] =
    {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    for (int ans : SpiralOrder(matrix, 3, 3))
    {
        cout << ans <<" ";
    }
    cout<<endl;
    return 0;
}
