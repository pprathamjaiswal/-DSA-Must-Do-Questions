#include <bits/stdc++.h>
using namespace std;

int ReverseInteger(int num)
{
    int ans = 0;
    while (num != 0)
    {
        int digit = num % 10;

        if((ans<INT_MIN)||(ans>INT_MAX)){
            return false;
        }
        ans = ans * 10 + digit;
        num = num / 10;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;

    cout << ReverseInteger(num)<<endl;
}