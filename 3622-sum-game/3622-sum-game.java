class Solution {
    public boolean sumGame(String num) {

        int sum1 = 0;
        int sum2 = 0;
        int c1 = 0;
        int c2 = 0;

        int n = num.length();

        for (int i = 0; i < n / 2; i++) {
            if (num.charAt(i) == '?') {
                c1++;
            } else {
                sum1 += num.charAt(i) - '0';
            }
        }

        for (int i = n / 2; i < n; i++) {
            if (num.charAt(i) == '?') {
                c2++;
            } else {
                sum2 += num.charAt(i) - '0';
            }
        }

        if ((c1 + c2) % 2 == 1) {
            return true;
        }

        return sum1 - sum2 != 9 * (c2 - c1) / 2;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna