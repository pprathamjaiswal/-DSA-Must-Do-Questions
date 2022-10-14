#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int RepeatingElement(int *arr, int size)
{
    int min_index = -1;
    unordered_set<int, int> s;

    for (int i=arr.size()-1; i >= 0; i--){
        if(s.find(arr[i]) != s.end()){
            min_index = i;
        }
        else {
            s.insert(arr[i]);
        }
    }

    if(min_index != -1) {
        return arr[min_index];
    }
    else 
        return -1;
    

    /* Using hash map*/
    // int ans = -1;
    // unordered_map<int, int> mp;
    // for (int i = 0; i < size; i++)
    // {
    //     mp[arr[i]]++;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     if (mp[arr[i]] > 1)
    //     {
    //         return arr[i];
    //     }
    // }
    // return ans;
}

int main()
{
    int arr[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int num = sizeof(arr) / sizeof(int);

    int ans = RepeatingElement(arr, num);
    cout << "first repeating element: " << ans;
}