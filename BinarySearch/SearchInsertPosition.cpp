class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int i = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(target == nums[mid]) return mid;
            else{
                if(target > nums[mid]){
                    low = mid + 1;
                    i = low;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return i;
    }
};
