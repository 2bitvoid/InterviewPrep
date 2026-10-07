/**
 * Title: Valid Anagram
 * Description: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 * Example:
 *      Input: s = "anagram", t = "nagaram"
 *      Output: true
 *      Explanation: Explain the example
 * Constraints:
 *      1 <= s.length, t.length <= 5 * 10^4

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
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> validate;
        for (int i = 0; i < s.length(); i++)
        {
            validate[s[i]]++;
            validate[t[i]]--;
        }

        for (const auto &[ch, count] : validate)
        {
            if (count != 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution solution;
    bool result = solution.isAnagram("anagram", "nagaram");
    cout << (result ? "true" : "false") << endl;
    return 0;
}
