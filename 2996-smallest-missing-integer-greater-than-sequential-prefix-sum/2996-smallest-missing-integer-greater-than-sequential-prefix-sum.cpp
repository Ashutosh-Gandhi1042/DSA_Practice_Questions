class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int maxi=0;
        int curr=0;
        unordered_map<int,int>mp1;
        for(auto& it:nums)
        {
            mp1[it]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 || nums[i]==nums[i-1]+1)
            {
                maxi+=nums[i];
            }
            else
            {
                break;
            }
        }
        //maxi=max(maxi,curr);
        while(mp1[maxi]!=0)
        {
            maxi++;
        }
        return maxi;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna