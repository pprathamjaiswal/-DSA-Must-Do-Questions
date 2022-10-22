#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arraySubset(int *a1, int *a2, int n, int m)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (map[a2[i]] < 1)
        {

            return false;
        }
        map[a2[i]]--;
    }

    return true;

    // bool flag = false;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(arr1[j]==arr[i]){
    //             break;
    //         }
    //         if(j==m){
    //             return true;
    //         }
    //     }
    // }
    // return false;
}

int main()
{
    int arr[] = {10, 5, 2, 23, 19};
    int arr1[] = {19, 5, 3};
    int num = sizeof(arr) / sizeof(int);
    int num1 = sizeof(arr1) / sizeof(int);
    int ans = arraySubset(arr, arr1, num, num1);
    if (ans)
    {
        cout << "arr1 is a subset of arr"<< " ";
    }
    else
    {
        cout << "arr1 is not a subset of arr"<< " ";
    }
}