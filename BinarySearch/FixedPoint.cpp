#include <bits/stdc++.h>
using namespace std;

int FixedPoint(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == arr[mid])
        {
            return mid;
            int ans = -1;
        }
        else if (mid < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
        return -1;
    }
}

int main()
{
    int arr[] = {-10, -5, 3, 4, 7, 9};
    int num = sizeof(arr) / sizeof(int);

    cout << FixedPoint(arr, num);
}