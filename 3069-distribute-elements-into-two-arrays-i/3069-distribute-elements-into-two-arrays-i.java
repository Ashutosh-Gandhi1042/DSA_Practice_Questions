class Solution {
    public int[] resultArray(int[] nums) {
        ArrayList<Integer>a1=new ArrayList<>();
        ArrayList<Integer>a2=new ArrayList<>();
        int[] res=new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
            if(i==0)
            {
                a1.add(nums[i]);
            }
            else if(i==1)
            {
                a2.add(nums[i]);
            }
            else
            {
                if(a1.get(a1.size()-1) >a2.get(a2.size()-1) )
                {
                    a1.add(nums[i]);
                }
                else
                {
                    a2.add(nums[i]);
                }
            }
        }
        int k=0;
        for(int i=0;i<a1.size();i++)
        {
            res[k]=(a1.get(i));
            k++;
        }
        for(int i=0;i<a2.size();i++)
        {
            res[k]=(a2.get(i));
            k++;
        }
        a1.clear();
        a2.clear();
        return res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna