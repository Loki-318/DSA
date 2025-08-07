// O(n^2) solution

class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        if(s1 == s2) return true;
        string res = s2;
        int n = s2.size();
        for(int i = n - 1; i > 0; i--){
            res = s2[i] + res;
            res.erase(res.size() - 1);
            
            if(res == s1) return true;
        }        
        return false;
    }
};

// Optimal O(n) solution
class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        return (s1.size() == s2.size() && (s2 + s2).find(s1) != string::npos);
    }
};
