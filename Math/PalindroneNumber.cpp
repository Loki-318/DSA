// #9
// My approach
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers aren't palindromes
        long long rev = 0;
        int rem = 0, temp = x;

        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        return x == rev;
    }
};


// A better approach
class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // If the number is even-length, x == reversed.
        // If the number is odd-length, x == reversed / 10.
        return x == reversed || x == reversed / 10;
    }
};
