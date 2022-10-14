#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kadane(int *arr, int n)
{
    int max_so_for = 0;
    int max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
    }
    if (max_ending_here < 0)
    {
        max_ending_here = 0;
    }
    if (max_so_for < max_ending_here)
    {
        max_so_for = max_ending_here;
    }
    return max_so_for;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sum contiguous subarray is " << kadane(arr, n);
    return 0;
}