class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int max_so_far = INT_MIN, current_max = 0;
        for(int i = 0; i < arr.size(); i++){
            current_max += arr[i];
            if(current_max > max_so_far) max_so_far = current_max;
            if(current_max < 0) current_max = 0;
        }
        return max_so_far;
    }
};
