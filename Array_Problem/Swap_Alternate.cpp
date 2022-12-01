#include <iostream>
using namespace std;

void alternateSwap(int *arr, int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printAlternateSwap(int *arr, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // 9 3 6 12 4 32
    int arr[] = {9, 3, 6, 12, 4, 32};
    int n = sizeof(arr) / sizeof(int);
    alternateSwap(arr, n);
    printAlternateSwap(arr, n);
}