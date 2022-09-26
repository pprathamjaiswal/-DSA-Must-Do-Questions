#include <iostream>
using namespace std;

void reverse(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

void PrintReverse(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[50] = {10, 20, 30, 40};
    cout << "revers array is "<< " ";
    reverse(arr, 4);
    // PrintReverse(arr, 4);
}