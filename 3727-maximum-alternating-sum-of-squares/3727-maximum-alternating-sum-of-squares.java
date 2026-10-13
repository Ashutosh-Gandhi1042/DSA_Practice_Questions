class Solution {
    public long maxAlternatingSum(int[] nums) {
        int n = nums.length;
        int res = 0;
        for (int i = 0; i < nums.length; i++) {
            nums[i] = Math.abs(nums[i]);
        }
        Arrays.sort(nums);
        long sum1 = 0;
        long sum2 = 0;
        for (int i = 0; i < (n / 2); i++) {
            sum1 += Math.pow(nums[i], 2);
        }
        for (int i = n / 2; i < n; i++) {
            sum2 += Math.pow(nums[i], 2);
        }
        return sum2 - sum1;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna