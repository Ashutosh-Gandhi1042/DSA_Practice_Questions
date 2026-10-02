class Solution {
public:
    vector<string> res;
    void helper(int o,int c, string s, int n)
    {
        if(o==n && c==n)
        {
            res.push_back(s);
            return ;
        }
        if(c>n ||o>n)
        {
            return ;
        }
        if(o<n)
        {
            helper(o+1,c,s+'(',n);
        }
        if(c<o)
        {
            helper(o,c+1,s+')',n);    
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="(";
        if(n==0)
        {
            return res;
        }
        helper(1,0,s,n);
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna