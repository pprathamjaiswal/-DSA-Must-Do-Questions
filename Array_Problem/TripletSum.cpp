#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Tripletsum(int *arr, int n, int target)
{
        
        sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int first = i;
        // cout<<first<<" ";
        int newTarget = target - first;
        // cout<<newTarget<<" ";
    i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == newTarget){
            cout << "Pair found (" <<arr[first]<<", "<< arr[i] << ", " << arr[j] << ")\n";
            // cout<<endl;
        }
        if (arr[i] + arr[j] > newTarget)
        {
            j--;
        }
        if (arr[i] + arr[j] < newTarget)
        {
            i++;
        }
        i++;
        j--;
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