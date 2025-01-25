// # 13

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int i = 0;
        int n = s.size();
        
        while (i < n) {
            if (i + 1 < n && s[i] == 'I' && s[i+1] == 'V') {
                num += 4;
                i += 2;
            } else if (i + 1 < n && s[i] == 'I' && s[i+1] == 'X') {
                num += 9;
                i += 2;
            } else if (i + 1 < n && s[i] == 'X' && s[i+1] == 'L') {
                num += 40;
                i += 2;
            } else if (i + 1 < n && s[i] == 'X' && s[i+1] == 'C') {
                num += 90;
                i += 2;
            } else if (i + 1 < n && s[i] == 'C' && s[i+1] == 'D') {
                num += 400;
                i += 2;
            } else if (i + 1 < n && s[i] == 'C' && s[i+1] == 'M') {
                num += 900;
                i += 2;
            } else {
                if (s[i] == 'I') num += 1;
                else if (s[i] == 'V') num += 5;
                else if (s[i] == 'X') num += 10;
                else if (s[i] == 'L') num += 50;
                else if (s[i] == 'C') num += 100;
                else if (s[i] == 'D') num += 500;
                else if (s[i] == 'M') num += 1000;
                i++;
            }
        }
        
        return num;
    }
};
