
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int n = s.size();
        int arr[26] = {0};
        
        for(char c : s){
            arr[c - 'a']++;
        }
        for(int i = 0; i < s.size(); i++){
            if(arr[s[i] - 'a'] == 1) return s[i];
        }
        return '$';
    }
};
