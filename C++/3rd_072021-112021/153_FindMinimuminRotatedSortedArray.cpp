//
// Created by BrandonZu on 2021/7/18.
//

#include "common.h"

// Runtime 0ms(>100%) | Memory Usage 10.3MB(>22%)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while(l < r) {
            int mid = l + r >> 1;
            if(nums[mid] <= nums.back())
                r = mid;
            else
                l = mid + 1;
        }
        return nums[l];
    }
};