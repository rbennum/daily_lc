#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create hash object
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            // find the complement between target and nums' entries
            int complement = target - nums[i];

            // check whether the complement exists inside the hash
            if (hash.find(complement) != hash.end()) {
                // return both indices if found as a vector
                return {hash[complement], i};
            }

            // register current entry and its index
            hash[nums[i]] = i;
        }

        // if nothing is found, return empty vector
        return {};
    }
};