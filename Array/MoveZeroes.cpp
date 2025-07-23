// #283

// Solution 1 - works but memory and time limit exceeded
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size();){
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);
                count++;
            }
            else i++;
        }
        while(count > 0){
            nums.push_back(0);
        }
    }
};

// Solution 2 - better version
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != 0) arr[count++] = arr[i];
        }
        
        while(count < arr.size()) arr[count++] = 0;
    }
};
