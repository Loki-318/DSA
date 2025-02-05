// # 392
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0, i = 0, j = 0;
        while(i < s.length() && j < t.length()){
            if(s[i] == t[j]){
                i++;
                j++;
                count++;
            }
            else j++;
        }
        
        if(count != s.length()) return false;
        return true;
    }
};
