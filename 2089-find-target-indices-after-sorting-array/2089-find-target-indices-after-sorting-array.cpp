class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        int less=0;
        int tar=0;
        for(int i=0;i<nums.size();i++)
        {   
        if(nums[i]<target)
            {
                less++;
            }
        if(nums[i]==target)
            {
                tar++;
            }
        }
        for(int i=0;i<tar;i++)
        {
            res.push_back(less+i);
        }
        return res;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna