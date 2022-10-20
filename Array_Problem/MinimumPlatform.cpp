/*----- Minimum Number of Platforms Required for a Railway/Bus Station -----*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findPlatform(int *arr, int *dep, int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 1, j = 0;
    int platform_need = 1;
    int result = 1;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            platform_need++;
            i++;
        }
        else if (arr[i] > dep[j])
        {
            platform_need--;
            j++;
        }
        if (platform_need > result)
            result = platform_need;
    }
    return result;

    // sort(arr, arr + n);
    // sort(dep, dep + n);
    // int j = 0;
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] <= dep[j])
    //         count++;
    //     else
    //         j++;
    // }
    // return count;
}

int main()
{
    // int arrival[] = {900, 940, 950, 1100, 1500, 1800};
    // int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
    int arrival[] = {900, 1100, 1235};
    int departure[] = {1000, 1200, 1240};
    int num = sizeof(arrival, departure) / sizeof(int);
    cout << findPlatform(arrival, departure, num) << endl;
}