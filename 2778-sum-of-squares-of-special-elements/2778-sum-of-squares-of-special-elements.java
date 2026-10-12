class Solution {
    public int sumOfSquares(int[] nums) {
        int n=nums.length;
        int res=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                res+=(int)Math.pow(nums[i-1],2);
            }
        }
        return res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna