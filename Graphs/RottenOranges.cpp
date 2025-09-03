class Solution {
  public:
  
    bool isSafe(int r, int c, int rows, int cols){
        return (r >= 0 && r < rows && c >= 0 && c < cols);
    }
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        
        int elapsedTime = 0;
        
        queue<vector<int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 2) q.push({i, j});
            }
        }
        
        vector<vector<int>> dir = {{1,0}, {0,1}, {-1,0}, {0,-1}};
        
        while(!q.empty()){
            int len = q.size();
            elapsedTime++;
            
            while(len--){
                vector<int> curr = q.front();
                q.pop();
                int i = curr[0];
                int j = curr[1];
                
                for(auto d : dir){
                    int r = i + d[0];
                    int c = j + d[1];
                    if(isSafe(r, c, n, m) && mat[r][c] == 1){
                        mat[r][c] = 2;
                        q.push({r, c});
                    }
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1) return -1;
            }
        }
        
        return max(0, elapsedTime - 1);
    }
};
