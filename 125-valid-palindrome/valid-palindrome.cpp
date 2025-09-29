#include <cctype> // Required for isalnum() and tolower()
#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Move the left pointer forward past non-alphanumeric characters
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // Move the right pointer backward past non-alphanumeric characters
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Compare the two characters (case-insensitive)
            if (tolower(s[left]) != tolower(s[right])) {
                return false; // Mismatch found
            }

            // Move pointers inward for the next check
            left++;
            right--;
        }

        // If the loop completes without finding a mismatch, it's a palindrome
        return true;
    }
};