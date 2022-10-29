#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid-1;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
    
}

int lastOcc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid+1;
        }

        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
    
}

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int num = sizeof(arr) / sizeof(int);
    int target = 5;

    cout << firstOcc(arr, num, target) << endl;
    cout << lastOcc(arr, num, target) << endl;
}