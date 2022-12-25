#include <bits/stdc++.h>
using namespace std;

/* Search in Rotated Sorted Array */

int Search(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[start] <= nums[mid])
        {
            if (target >= nums[start] && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target >= nums[mid] && target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            return -1;
        }
    }
    return -1;
}

int main()
{
    vector<int> num = {4, 5, 6, 7, 0, 1, 2};
    int numsSize = sizeof(num) / sizeof(int);
    int target = 2;

    cout << Search(num, target) << endl;
}