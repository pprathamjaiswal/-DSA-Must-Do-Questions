#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MinimiseHeight(int *arr, int n, int k)
{
    sort(arr, arr + n);
    int largest = arr[n - 1];
    int smallest = arr[0];
    int ans = largest - smallest;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[n - 1] - k, arr[i] + k);
        mini = min(arr[0] + k, arr[i + 1] - k);
        if (mini < 0)
        {
            continue;
        }
        ans = min(ans, maxi - mini);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 5, 8, 10};
    int k = 2;
    int num = sizeof(arr) / sizeof(int);
    cout << MinimiseHeight(arr, num, k) << " ";
}