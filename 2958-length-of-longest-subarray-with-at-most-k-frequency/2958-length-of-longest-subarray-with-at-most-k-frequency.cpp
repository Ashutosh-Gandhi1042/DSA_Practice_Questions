class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int res=0;
        unordered_map<int,int> mp1;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            mp1[nums[i]]++;
            if(mp1[nums[i]]>k)
            {
                while(mp1[nums[i]]>k)
                {
                    mp1[nums[l]]--;
                    l++;
                }
            }
            res=max(res,(i-l+1));
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna