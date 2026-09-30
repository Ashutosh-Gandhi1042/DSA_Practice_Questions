class Solution {
public:
    int helper(vector<vector<int>>& grid,int i , int j,vector<vector<int>>&dp)
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i==grid.size()-1 && j==grid[0].size()-1)
        {
            dp[i][j]= grid[i][j];
            return dp[i][j];
        }
        else if(i==grid.size()-1)
        {
            dp[i][j]= grid[i][j]+helper(grid,i,j+1,dp);
            return dp[i][j];
        }
        else if(j==grid[0].size()-1)
        {
            dp[i][j]= grid[i][j]+helper(grid,i+1,j,dp);
            return dp[i][j];
        }
        else
        {
            dp[i][j]= grid[i][j]+min(helper(grid,i+1,j,dp), helper(grid,i,j+1,dp));
            return dp[i][j];
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return helper(grid,0,0,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna