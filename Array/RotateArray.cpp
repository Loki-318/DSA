// # 189

//  Solution 1 - O(n) time and O(1) space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),  nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

//  Solution 2 - O(n) time and space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = arr.size();
        vector<int> temp(n);
        d %= n;
        for(int i = 0; i < n; i++)
            temp[i] = arr[d + i];
            
        for(int i = 0; i < d; i++)
            temp[n - d + i] = arr[i];
            
        for(int i = 0; i < n; i++)
            arr[i] = temp[i];
    }
};

