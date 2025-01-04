// #169

// Using Boyer-Moore Voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0;
        int count = 0;
        for(int num : nums)
        {
            if(count == 0) maj = num;

            if(num == maj) count++;
            else count--;
        }
        return maj;
    }
};

// Using two loops will take O(n^2) and for one test case it exceeds the time limit (so don't use)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > (nums.size() / 2))
                maj = nums[i];
        }
        return maj;
    }
};
