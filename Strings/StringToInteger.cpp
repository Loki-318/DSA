// #8
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long res = 0;
        int digit = 0;
        while(s[i] == ' '){
            i++;
        }
        int sign = 1;
        if(i < s.size() && (s[i] == '-' || s[i] == '+')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while(i < s.size() && isdigit(s[i])){
            digit = s[i] - '0';
            res = res * 10 + digit;
            if(sign * res <= INT_MIN) return INT_MIN;
            if(sign * res >= INT_MAX) return INT_MAX;
            i++;
        }
        return res * sign;
    }
};
