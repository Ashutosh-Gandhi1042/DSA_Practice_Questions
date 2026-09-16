class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int j = nums.size() - 1;
        int i = 0;
                const long long MOD = 1000000007LL;

        vector<long long>arr;
        arr.push_back(1);
        for(int k=1;k<nums.size();k++)
        {
            arr.push_back((arr[k-1]*2)%MOD);
        }
        while (i < nums.size()) {
            while (j >= i) {
                if (nums[i] + nums[j] <= target) {
                    int r=arr[j-i]%MOD;
                    count=(count+r)%MOD;
                    break;
                }
                j--;
            }
            i++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna