class Solution {
  public:
    void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int row, int col, int r, int c){
        vector<int> rNbr = {-1, -1, -1, 0, 0, 1, 1, 1};
        vector<int> cNbr = {-1, 0, 1, -1, 1, -1, 0, 1};
        
        visited[r][c] = true;
        
        for(int k = 0; k < 8; k++){
            int newR = r + rNbr[k];
            int newC = c + cNbr[k];
            if(newR >= 0 && newR < row && newC >= 0 && newC < col && (grid[newR][newC] == 'L' && !visited[newR][newC]))
                dfs(grid, visited, row, col, newR, newC);
        }
    }
    
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        int count = 0;
        
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                if(grid[r][c] == 'L' && !visited[r][c]){
                    dfs(grid, visited, row, col, r, c);
                    count++;
                }
            }
        }
        return count;
    }
};
