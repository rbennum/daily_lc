#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // handling the edge cases where the vector of string is empty
        if (strs.empty()) return "";

        // sort the array to maximize the difference between all strings
        sort(strs.begin(), strs.end());

        // so we only need to compare between the first and the last string
        string first = strs[0];
        string last = strs.back();
        int i = 0;

        // find the common prefix
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        // slice the string and return it
        return first.substr(0, i);
    }
};