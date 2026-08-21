class Solution {
    public int maxProfit(int[] prices) {
        int j=1;
        int i=0;
        int res=0;
        while(j<prices.length)
        {
            if(prices[j]>prices[i])
            {
                res=Math.max(res, (prices[j]-prices[i]) );
                j++;
            }
            else
            {
                i=j;
                j++;
            }
        }
        return res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna