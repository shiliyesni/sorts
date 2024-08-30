#include <iostream>
#include <vector>
#include <algorithm>
void bubble_sort(std::vector<int> &nums)
{
    for(int i = nums.size() - 1; i > 1; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(nums[j] > nums[j + 1])
                std::swap(nums[i], nums[j]);
        }
    }
}
