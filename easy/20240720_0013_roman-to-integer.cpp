#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // create a dictionary of roman values
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int n = s.length();

        // loop the whole string
        for (int i = 0; i < n; ++i) {
            // take the assigned value of the current roman character
            int value = romanValues[s[i]];

            // identify the subtractive notation
            // meaning if the next numeral is larger than the previous one
            // it will be subtracted
            // ex: XL (X: 10, L: 50)
            //     L appears after X, so L should be subtracted by X
            //     XL = 40
            // don't forget to check whether the current index has reached
            // the end of line
            if (i < n - 1 && value < romanValues[s[i + 1]]) {
                total -= value;
            } else {
                total += value;
            }
        }

        return total;
    }
};