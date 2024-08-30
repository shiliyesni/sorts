#include <iostream>
#include <vector>
#include <algorithm>

void dfs(std::vector<int> &nums, int left, int right)
{
    if(left >= right) return;
    int i = left, j = right;
    int pivot = nums[left];
    while(i < j)
    {
        while(i < j && nums[j] >= pivot) j--;
        nums[i] = nums[j];
        while(i < j && nums[i] <= pivot) i++;
        nums[j] = nums[i];
    }
    nums[i] = pivot;
    dfs(nums, left, i - 1);
    dfs(nums, i + 1, right);
}

void quick_sort(std::vector<int>& nums)
{
    dfs(nums, 0, nums.size()-1);
}