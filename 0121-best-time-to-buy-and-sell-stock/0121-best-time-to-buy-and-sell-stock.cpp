class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = i + 1;
        int k = 0;
        int res = 0;
        while (i < prices.size() && j < prices.size()) {
            if (prices[j] > prices[k]) {
                k = j;
                res = max(res, prices[k] - prices[i]);
                j++;
                continue;
            }
            if (prices[j] <= prices[i]) {
                i = j;
                k = i;
            }
            j++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna