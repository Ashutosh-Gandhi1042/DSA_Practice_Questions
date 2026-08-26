class Solution {

    public static String compare(String s1, String s2) {

        if (s1.length() != s2.length()) {
            return s1.length() < s2.length() ? s1 : s2;
        }

        for (int i = 0; i < s1.length(); i++) {

            if (s1.charAt(i) != s2.charAt(i)) {
                return s1.charAt(i) < s2.charAt(i) ? s1 : s2;
            }
        }

        return s1;
    }

    public String shortestBeautifulSubstring(String s, int k) {

        int i = 0;
        int c = 0;
        String ans = "";

        for (int j = 0; j < s.length(); j++) {

            if (s.charAt(j) == '1') {
                c++;
            }

            while (c > k) {
                if (s.charAt(i) == '1') {
                    c--;
                }
                i++;
            }

            while (c == k) {

                String curr = s.substring(i, j + 1);

                if (ans.length() == 0) {
                    ans = curr;
                } else {
                    ans = compare(ans, curr);
                }

                if (s.charAt(i) == '1') {
                    c--;
                }

                i++;
            }
        }

        return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna