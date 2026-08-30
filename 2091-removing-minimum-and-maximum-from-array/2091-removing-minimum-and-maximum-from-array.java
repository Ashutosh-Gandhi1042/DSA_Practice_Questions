class Solution {
    public int minimumDeletions(int[] nums) {
        int mini=0;
        int maxi=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[mini]>nums[i])
            {
                mini=i;
            }
            if(nums[maxi]<nums[i])
            {
                maxi=i;
            }
        }
        int x=((Math.min(mini,maxi)+1)+ (nums.length-Math.max(mini,maxi)) );
        int y=(nums.length-Math.min(mini,maxi));
        int z=Math.max(mini,maxi)+1;
        return Math.min(x,Math.min(y,z));
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna