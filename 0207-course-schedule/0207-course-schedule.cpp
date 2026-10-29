class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>vis(numCourses,0);
        queue<int>q1;
        vector<vector<int>>adj(numCourses);
        vector<int>idg(numCourses,0);
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            idg[prerequisites[i][0]]++;
        }
        int count=0;
        for(int i=0;i<numCourses;i++)
        {
            if(idg[i]==0)
            {
                q1.push(i);
                vis[i]=-1;
                count++;
            }
        }
        while(!q1.empty())
        {
            int f=q1.front();
            q1.pop();
            for(int i=0;i<adj[f].size();i++)
            {
                idg[adj[f][i]]--;
                if(idg[adj[f][i]]==0)
                {
                    q1.push(adj[f][i]);
                    count++;
                } 
            }
        }
        if(count==numCourses)
        {
            return true;
        }
        return false;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna