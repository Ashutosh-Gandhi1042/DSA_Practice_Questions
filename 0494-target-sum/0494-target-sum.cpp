class Solution {
public:
    int helper(vector<int>&nums,int i,int sum,int target)
    {
        if(i==nums.size())
        {
            if(sum==target)
            {
                return 1;
            }
            return 0;
        }
        return helper(nums,i+1,sum+nums[i],target)+helper(nums,i+1,sum-nums[i],target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums,0,0,target);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna