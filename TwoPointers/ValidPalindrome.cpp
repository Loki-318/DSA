// #125

class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(char c : s){
            if(isalnum(c))
                s2.push_back(tolower(c));
        }
        int i = 0, j = s2.size() - 1;
        while(i < j){
            if(s2[i] != s2[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
