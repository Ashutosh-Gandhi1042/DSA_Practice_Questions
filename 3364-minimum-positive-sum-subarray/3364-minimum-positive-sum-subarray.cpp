class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

        for (int e = 1; e < nums.size(); e++) {
            nums[e] += nums[e - 1];
        }

        int x = 0;
        int i = l - 1;
        int res = INT_MAX;

        while (i < nums.size()) {

            int j = i;

            while (j - i < r - l + 1 && j < nums.size()) {

                int sum;

                if (i == l - 1) {
                    sum = nums[j];
                } else {
                    sum = nums[j] - nums[i - l];
                }

                if (sum > 0) {
                    res = min(sum, res);
                }

                j++;
            }

            i++;
        }

        return res == INT_MAX ? -1 : res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna