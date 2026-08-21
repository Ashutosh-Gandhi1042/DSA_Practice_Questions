class Solution {
    int helper(int[] nums, int idx, ArrayList<Integer>dp)
    {
        if(idx>=nums.length)
        {
            return 0;
        }
        if(idx==nums.length-1)
        {
            dp.set(idx,nums[idx]);
            return dp.get(idx);
        }

        if(dp.get(idx)!=-1)
        {
            return dp.get(idx);
        }
       
        int take=nums[idx]+helper(nums,idx+2,dp);
        int not_take=0+helper(nums,idx+1,dp);
        dp.set(idx,Math.max(take,not_take));
        return dp.get(idx);
    }
    public int rob(int[] nums) {
        ArrayList<Integer>dp=new ArrayList<>(Collections.nCopies(nums.length,-1));
        helper(nums,0,dp);
        return dp.get(0);
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna