// #242
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> freq1, freq2;
        if(s.size() != t.size()) return false;

        // for(char c : s) freq1[c]++;
        // for(char c : t) freq2[c]++;
        for(int i = 0; i < s.size(); i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }
        return freq1 == freq2;
    }
};
