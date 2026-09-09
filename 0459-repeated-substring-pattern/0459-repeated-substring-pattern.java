class Solution {
    public boolean repeatedSubstringPattern(String s) {
        int n=s.length();
        
        int x=1;
        while(x<=n/2)
        {
            if(n%x==0 && s.substring(0,x).equals(s.substring(x,2*x)))
            {
                int i=0;
                while(i+x+x<=n)
                {
                    if(s.substring(i,i+x).equals(s.substring(i+x,i+x+x)))
                    {
                        i+=x;
                        continue;
                    }else
                    {
                        break;
                    }
                }
                if(i==n-x)
                {
                    return true;
                }
            }
            x++;
        }
        return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna