#include <iostream>
#include <vector>

void select_sort(std::vector<int>& nums)
{
    for(int i = 0; i < nums.size() - 1; i++)
    {
        int min_index = i;
        for(int j = i; j < nums.size(); j++)
        {
            if(nums[j] < nums[min_index])
                min_index = j;
        }
        std::swap(nums[min_index], nums[i]);
    }
}
