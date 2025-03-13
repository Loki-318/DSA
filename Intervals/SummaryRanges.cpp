// # 228

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        string str = "";
        int n = nums.size();
        if(n == 0) return res;

        int m = nums[0];
        for(int i = 0; i < n; i++){
            if(i == n - 1 || nums[i+1] != nums[i] + 1){
                if(m == nums[i]) res.push_back(to_string(m));
                else res.push_back(to_string(m) + "->" + to_string(nums[i]));
                
                if(i != n - 1) m = nums[i + 1];
            }

        }
        return res;
    }
};
