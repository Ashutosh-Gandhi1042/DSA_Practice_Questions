class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res=1;
        int n=nums.size();
        int i=1;
        int curr=1;
        while(i<n)
        {
            if(nums[i]>nums[i-1])
            {
                curr++;
                res=max(res,curr);
            }
            else
            {
                curr=1;
            }
            i++;
        }
        i=1;
        curr=1;
        while(i<n)
        {
            if(nums[i]<nums[i-1])
            {
                curr++;
                res=max(res,curr);
            }
            else
            {
                curr=1;
            }
            i++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna