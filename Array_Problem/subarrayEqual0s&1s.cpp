#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countZerosOnes(int arr[], int n)
{
    unordered_map<int, int> mp;
    int sum = 0;
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        (arr[i] == 0) ? sum -= 1 : sum += 1;
        if (mp.find(sum) != mp.end())
        {
            ans = mp[sum];
            mp[sum]++;
        }
        else {
            mp[sum] = 1;
        }
    }
    return ans;
}

int main()
{
    int arr[]= {1, 0, 0, 1, 0, 1, 1};
    int num = sizeof(int)/sizeof(arr);

    int ans = countZerosOnes(arr, num);
    cout<<ans<<" ";
}