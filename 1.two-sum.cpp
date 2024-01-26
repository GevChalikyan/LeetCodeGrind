/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

#include <vector>
#include <unordered_map>

// @lc code=start
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        unsigned int numsSize = nums.size();
        std::unordered_map<int, int> map;

        for (int i = 0; i < numsSize; i++) {
            int complement = target - nums[i];

            if(map.find(complement) != map.end())
                return { map.at(complement), i };

            map.emplace(nums[i], i);
        }

		throw "No Solution";
    }
};
// @lc code=end

