class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string s;
    
        for(int i=0;i<n;i++)
        {
            s+='#';
        }
        vector<string>res(m,s);
        for(int i=0;i<n;i++)
        {
            res[0][i]='.';
        }
        for(int i=0;i<m;i++)
        {
            res[i][n-1]='.';
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna