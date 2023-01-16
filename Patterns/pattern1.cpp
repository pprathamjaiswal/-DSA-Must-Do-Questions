#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin >> input;

    int i = 1;
    while (i <= input)
    {
        int j = 1;
        while (j <= input)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}