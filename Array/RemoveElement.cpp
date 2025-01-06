// #27

// This one takes up memory and usage of stack is unnecessary
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        stack<int> st;
        for(int i = 0; i < n; i++) {
            if(nums[i] != val)
            {
                st.push(nums[i]);
            }
        }
        nums.clear();
        int s = st.size();
        for(int i = 0; i < s; i++)
        {
            nums.insert(nums.begin() + i, st.top());
            st.pop();
        }
        return nums.size();
    }
};

// Efficient one (ig)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr = 0;

        for(int i = 0; i < nums.size(); i++ ) {
            if (nums[i] != val) {
                swap(nums[ptr++], nums[i]);
            }
        }

        return ptr;
    }
};
