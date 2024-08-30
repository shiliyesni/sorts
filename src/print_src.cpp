// print_src.cpp
#include <iostream>
#include <vector>

void print_src(const std::vector<int>& nums)
{
    for(size_t i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << ' ';
    }
    std::cout << std::endl;
}
