class Solution {
public: 
    bool helper( string s , string p, int i ,int j, vector<vector<int>>& dp)
    {
        if(i==-1 && j==-1 )
        {
            return true;
        }
        if(i!=-1 && j==-1)
        {
            return false;
        }
        if(i==-1 && j!=-1)
        {
            for(int k=0;k<=j;k++)
            {
                if(p[k]!='*')
                {
                    return false;
                }
            }
            return true;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(s[i]==p[j] || p[j]=='?')
        {
            dp[i][j]= helper(s,p,i-1,j-1,dp);
        }
        else if(p[j]=='*')
        {
            dp[i][j]= helper(s,p,i-1,j,dp) || helper(s,p,i,j-1,dp);
        }
        else
        {
            dp[i][j]= false;
        }
        return dp[i][j];
    }
    bool isMatch(string s, string p) {
        int i=s.size();
        int j=p.size();
        vector<vector<int>>dp(i,vector<int>(j,-1));
        return helper(s,p,i-1,j-1,dp);

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna