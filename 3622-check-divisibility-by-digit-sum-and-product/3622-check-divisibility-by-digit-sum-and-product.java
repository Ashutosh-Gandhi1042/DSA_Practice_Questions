class Solution {
    public boolean checkDivisibility(int n) {
        int k=n;
        int sum=0;
        int prod=1;
        while(n>0)
        {
            sum+=(n%10);
            prod*=(n%10);
            n=n/10;
        }
        if(k%(sum+prod)==0)
        {
            return true;
        }
        return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna