#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Minimumswap(int *arr, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }
    int bad = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            bad++;
        }
    }
    int ans = bad;
    for (int i = 0, j = count; j < n; i++, j++)
    {
        if (arr[i] > k)
        {
            bad--;
        }
        if (arr[j] > k)
        {
            bad++;
        }
        ans = min(ans, bad);
    }
    return ans;
}

int main()
{
    int arr[] = {2, 1, 5, 6, 3};
    int num = sizeof(arr)/sizeof(int);
    cout << Minimumswap(arr, num, 3) << endl;
}