class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp1;
        for(int i=0;i<knowledge.size();i++)
        {
            mp1[knowledge[i][0]]=knowledge[i][1];
        }
        string s1;
        string res;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                s1.clear();
                count++;
                continue;
            }
            if(s[i]==')')
            {
                count--;
                if(mp1.find(s1)!=mp1.end())
                {
                    res+=mp1[s1];
                }
                else
                {
                    res+='?';
                }
                s1.clear();
                continue;
            }
            if(count>0)
            {
                s1+=s[i];
            }
            else
            {
                res+=s[i];
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna