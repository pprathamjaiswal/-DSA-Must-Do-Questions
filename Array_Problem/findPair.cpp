/*Find a Pair of that sum to a given value */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pairSum(int *arr, int n, int target)
{
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target){
            cout << "Pair found (" << arr[i] << ", " << arr[j] << ")\n";
            // cout<<endl;
        }
        if (arr[i] + arr[j] > target)
        {
            j--;
        }
        i++;
    }
    return 0;
}

int main()
{
    int arr[] = {8, 7, 2, 5, 3, 1};
    int num = sizeof(arr) / sizeof(int);
    int target = 10;
    pairSum(arr, num, target);
}