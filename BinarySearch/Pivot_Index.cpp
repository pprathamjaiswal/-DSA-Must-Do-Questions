#include <bits/stdc++.h>
using namespace std;

int PivotIndex(vector<int> &nums)
{
    int total_sum = 0;

    for (int start = 0; start < nums.size(); start++)
    {
        total_sum += nums[start];
    };

    int left_sum = 0;

    for (int start = 0; start < nums.size(); start++)
    {
        total_sum -= nums[start];

        if (total_sum == left_sum)

            return start;

        left_sum += nums[start];
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int size = sizeof(nums) / sizeof(size);
    cout << PivotIndex(nums);
}