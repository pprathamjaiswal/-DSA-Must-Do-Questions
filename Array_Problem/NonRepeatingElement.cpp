#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NonRepeatingElement(int *arr, int size)
{
    bool ans = false;
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (mp[arr[i]] == 1)
        {
            return arr[i];
        }
    }
    return ans;
}

int main()
{
    int arr[] = {9, 4, 9, 7, 7, 4};
    int num = sizeof(arr) / sizeof(int);

    int ans = NonRepeatingElement(arr, num);
    if (ans)
    {
        cout << "first Non-Repeating element is: " << ans;
    }
    else
    {
        cout << " Non-Repeating element is unavailable: " << ans;
    }
}