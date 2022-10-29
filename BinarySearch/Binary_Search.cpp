#include <iostream>
#include<algorithm>
using namespace std;

int Search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 9, 11, 23};
    int n = sizeof(arr)/sizeof(int);
    int target = 2;
    cout<<binary_search(arr, arr+n, target)<<endl;
    cout << "Index is  "<< Search(arr, n, target) << endl;

    return 0;
}