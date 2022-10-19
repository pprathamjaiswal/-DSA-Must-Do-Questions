#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool SubarrayZero(int *arr, int n)
{
    unordered_set<int> st;
    int prefix_Sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_Sum += arr[i];

        if (prefix_Sum == 0)
            return true;

        if (st.find(prefix_Sum) != st.end())
            return true;
            st.insert(prefix_Sum);
    }
    return false;
}

int main()
{
    int arr[] = {4, 2, -3, 1, 6};
    int num = sizeof(arr)/sizeof(int);
    int sum = 0;
    
    int ans = SubarrayZero(arr, num);
    if (ans)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    
}
// int main()
// {
//     int arr[] = {4, 2, -3, 1, 6};
//     int num = sizeof(arr) / sizeof(int);
//     int curr_min = 0;
//     // bool found = false;
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = i + 1; j < num; j++)
//         {
//             curr_min += arr[j];
//             if (curr_min == 0)
//             {
//                 cout << "Sum found between indexes " << i << " and " << j << endl;
//                 // found = true;
//                 break;
//             }
//         }
//         // if (found)
//         break;
//     }
//     cout << "Element is found " << curr_min << endl;
// }