// #74

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> n;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                n.push_back(matrix[i][j]);
            }
        }
        int low = 0, high = n.size()-1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(n[mid] == target)
                return true;
            else if(n[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};
