// #152

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_so_far = nums[0], max_so_far = nums[0], result = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < 0){
                int temp = min_so_far;
                min_so_far = max_so_far;
                max_so_far = temp;
            }

            max_so_far = max(nums[i], max_so_far * nums[i]);
            min_so_far = min(nums[i], min_so_far * nums[i]);

            result = max(max_so_far, result);
        }

        return result;
    }
};
