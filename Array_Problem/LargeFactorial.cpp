#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> largefactorial(int N)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int digit = ans[j] * i + carry;
            ans[j] = digit % 10;
            carry = digit / 10;
        }
        while (carry != 0)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int N;
    cin >> N;
    vector<int> result = largefactorial(N);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "";
    }
}