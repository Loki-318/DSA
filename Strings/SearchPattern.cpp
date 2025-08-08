// O(n*m) solution
class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here
        int i = 0;
        vector<int> arr;
        int ind = 0;
        
        while(i < (txt.size() - pat.size())){
            ind = txt.find(pat, i);
            if(ind >= txt.size()) return arr;
            arr.push_back(ind);
            i = ind + pat.size();
        }
        return arr;
    }
};

// O(n + m) solution
class Solution {
  public:
    void constructLps(string &pat, vector<int> &lps){
        int len = 0;
        lps[0] = 0;
        
        int i = 1;
        while(i < pat.size()){
            if(pat[i] == pat[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else {
                if(len != 0) len = lps[len-1];
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    vector<int> search(string &pat, string &txt) {
        // code here
        int n = txt.size();
        int m = pat.size();
        
        vector<int> lps(m);
        vector<int> res;
        
        constructLps(pat, lps);
        int i = 0;
        int j = 0;
        while(i < n){
            if(txt[i] == pat[j]){
                i++;
                j++;
                if(j == m){
                    res.push_back(i - j);
                    j = lps[j - 1];
                }
            }
            else{
                if(j != 0) j = lps[j - 1];
                else i++;
            }
        }
        return res;
    }
};
