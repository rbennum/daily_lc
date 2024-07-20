using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // create the mutable version of x
        int number = x;

        // reserve a variable to hold big number
        long reversed = 0;

        while (number > 0) {
            // fetch the last digit of the input
            // ex: 121 % 10 = 1
            // ex: 12 % 10 = 2
            int reminder = number % 10;

            // append the last digit to existing reversed number
            // ex: 0 * 10 + reminder (1) = 0 + 1 = 1
            // ex: 1 * 10 + reminder (2) = 10 + 2 = 12
            reversed = reversed * 10 + reminder;

            // remove the last digit until number equals 0
            // ex: 121 / 10 = 12
            // ex: 1 / 10 = 0
            number = number / 10;
        }

        // check if the reversed one is the same as input
        return x == reversed;
    }
};