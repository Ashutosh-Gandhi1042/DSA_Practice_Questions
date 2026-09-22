class Solution {
public:
    int reverseDegree(string s) {
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            res+=('z'-s[i]+1)*(i+1);
        }
        return res;    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna