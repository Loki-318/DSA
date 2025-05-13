// # 66

// This works up to a certain range and then fails.
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string s = "";
        for(int i : digits) s += to_string(i);
        long num = 0;
        stringstream ss;
        ss << s;
        ss >> num;
        num += 1;
        s = to_string(num);
        vector<int> nums;
        for(char c : s) nums.push_back(c - '0');

        return nums;
    }
};

// Final code
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n-1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
