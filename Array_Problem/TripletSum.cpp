#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Tripletsum(int *arr, int n, int target)
{
    sort(arr, arr + n);
    for (int i = 0; i < n-1; i++)
    {
        int newTarget = target - arr[i];

        int low = 0;
        int high = n - 1;
        while (low < high)
        {
            if (arr[low] + arr[high] == newTarget)
            {
                cout << "Pair found (" << arr[i] << ", " << arr[low] << ", " << arr[high] << ")\n";
            }
            if (arr[low] + arr[high] > newTarget)
            {
                high--;
            }
            if (arr[low] + arr[high] < newTarget)
            {
                low++;
            }
            low++;
            high--;
        }
    }
}

int main()
{
    int arr[] = {2, 7, 4, 0, 9, 5, 1, 3};
    int target = 6;
    int num = sizeof(arr) / sizeof(int);
    Tripletsum(arr, num, target);
}