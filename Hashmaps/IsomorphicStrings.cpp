// # 205
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<int, int> map, map2;
        for(int i = 0; i < s.length(); i++){
            if(map[s[i]] && map[s[i]] != t[i]) return false;
            if(map2[t[i]] && map2[t[i]] != s[i]) return false;

            map[s[i]] = t[i];
            map2[t[i]] = s[i];
        }
        return true;
    }
};
