class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n = grid[0].size();
        int res=0;
        queue<pair<int,int>>q1;
        vector<vector<int>>dir={
            {-1,0},{0,1},{1,0},{0,-1}
        };
        vector<vector<int>>vis(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==-1)
                {
                    q1.push({i,j});
                    vis[i][j]=1;
                    int curr=1;
                    while(!q1.empty())
                    {
                        for(int k=0;k<dir.size();k++)
                        {
                           pair<int,int>f=q1.front();
                            pair<int,int>p1={(f.first+dir[k][0]),(f.second+dir[k][1])};
                            if(p1.first>=0 && p1.second>=0 && p1.first<m && p1.second<n && grid[p1.first][p1.second]==1  && vis[p1.first][p1.second]==-1)
                            {
                                q1.push({p1.first,p1.second});
                                vis[p1.first][p1.second]=1;
                                curr++;
                            }
                        }
                        q1.pop();
                    }
                res=max(res,curr);
                }
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna