class Solution {
    public int smallestNumber(int n, int t) {
        int c1=0;
        while(c1!=1)
        {
            int n1=1;
            int n2=n;
            while(n2>0)
            {
                n1*=n2%10;
                n2/=10;
            }
            if(n1%t==0)
            {
                c1++;
                break;
            }
            n++;
        }
        return n;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna