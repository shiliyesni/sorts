// init_src.cpp
#include <iostream>
#include <cstdlib>
#include <vector>

std::vector<int> init_src()
{
    srand(1); // 初始化随机数种子
    std::vector<int> nums(9); // 初始化向量大小为9
    for(int i = 0; i < 9; i++)
    {
        nums[i] = rand() % 100 + 1; // 填充随机数
    }
    return nums;
}
