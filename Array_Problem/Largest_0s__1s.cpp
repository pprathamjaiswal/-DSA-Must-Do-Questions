#include <bits/stdc++.h>
using namespace std;

int findSubArray(int arr[], int n)
// This is Brute force T.c O(n^2);
/*{
    int max_len = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int zeros = 0, ones = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
            {
                zeros++;
            }
            else
            {
                ones++;
            }
            if (zeros == ones)
            {
                max_len = max(max_len, j - i + 1);
            }
        }
    }
    return max_len;
}*/

{
    map<int, int> mp;
    int sum = 0;
    int max_count = 0;
    mp[0] = -1;
    for (int start = 0; start < n; start++)
    {
        sum += arr[start] == 1 ? 1 : -1;
        if (mp.find(sum) != mp.end())
        {
            max_count = max(max_count, start - mp[sum]);
        }
        else
        {
            mp[sum] = start;
        }
    }
    return max_count;
}

int main()
{

    int arr[] = {1, 0, 0, 1, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << findSubArray(arr, size);
    return 0;
}