// main.cpp
#include <iostream>
#include <vector>
#include "insert_sort.h"
#include "init_src.h"
#include "print_src.h"
#include "bubble_sort.h"
#include "select_sort.h"
#include "shell_sort.h"
#include "quick_sort.h"

int main()
{
    std::vector<int> nums = init_src(); // 初始化数组
    print_src(nums);
    //bubble_sort(nums);
    //insert_sort(nums);
    //select_sort(nums);
    //shell_sort(nums);
    quick_sort(nums);
    print_src(nums);               // 打印数组
    return 0;
}
