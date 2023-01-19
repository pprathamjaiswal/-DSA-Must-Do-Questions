#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{
    int prod = 1;
    int sum = 0;

    while (n != 0)
    { // 234 >> 4>> 23 >> 3 >> 2 >> 2 >> 0
        int digit = n % 10;
        prod = prod * digit; // 1*4=4, || 4*3=12 || 12*2=24

        sum = sum + digit;
        n = n / 10;
    }
    int answer = prod - sum;
    return answer;
}

int main()
{
    int num = 5;
    cin >> num;
    cout << subtractProductAndSum(num) << "";
}