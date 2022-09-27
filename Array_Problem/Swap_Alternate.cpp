#include <iostream>
using namespace std;

void alternateSwap(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
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
    int arr[] = {9, 3, 6, 12, 4, 32};
    int n = sizeof(arr) / sizeof(int);
    printAlternateSwap(arr, n);
    alternateSwap(arr, n);
}