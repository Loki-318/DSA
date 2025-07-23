class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = -1, max2 = -1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max) max = arr[i];
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max2 && arr[i] != max) max2 = arr[i];
        }
        return max2;
    }
};

