#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int value = 1;
    // int value =  row;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value++ << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}