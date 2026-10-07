/**
 * Title: Contains Duplicate
 * Description: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 * Example:
 *      Input: nums = [1,2,3,1]
 *      Output: true
 *      Explanation: The element 1 occurs at the indices 0 and 3.
 * Constraints:
 *      1 <= nums.length <= 10^5
 *      -10^9 <= nums[i] <= 10^9

 * Approach: Explain the main idea
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool ContainsDuplicate(vector<int> & nums)
    {
        unordered_set<int> seen;

        for (int num : nums) 
        {
            if (seen.count(num)) 
            {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};
    bool result = solution.ContainsDuplicate(nums);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
