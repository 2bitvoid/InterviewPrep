/**
 * Title: Two Sum
 * Description: You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
 * Example:
 *      Input: nums = [2,7,11,15], target = 9
 *      Output: [0,1]
 *      Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 * Constraints:
 *      2 <= nums.length <= 10^4
 *      -10^9 <= nums[i] <= 10^9
 *      -10^9 <= target <= 10^9

 * Approach: Explain the main idea
 * Time Complexity:
 * Space Complexity:
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> pair;

        for (int i = 0; i < nums.size(); ++i)
        {
            int num2 = target - nums[i];
            if (pair.find(num2) != pair.end())
            {
                return {i, pair[num2]};
            }
            pair[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {2, 7, 11, 15};
    const auto result = solution.twoSum(nums, 9);
    for (int index : result)
    {
        cout << index << " ";
    }
    return 0;
}
