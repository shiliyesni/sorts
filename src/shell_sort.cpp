#include <iostream>
#include <vector>
#include <algorithm>

void shell_sort(std::vector<int> &nums)
{
    int d = nums.size() / 2;
    while(d >= 1)
    {
        for(int i = d; i < nums.size(); i++)
        {
            for(int j = i; j >= 0 && j >= d; j = j - d)
            {
                if(nums[j] < nums[j - d])
                    std::swap(nums[j], nums[j - d]);
            }
        }
        d /= 2;
    }
}
