class Solution {
    public int balancedStringSplit(String s) {
        Stack<Character> s1 = new Stack<>();
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s1.size() == 0) {
                s1.push(s.charAt(i));
            } else if (s1.peek() != s.charAt(i)) {
                s1.pop();
                if (s1.size() == 0) {
                    count++;
                }
            } else {
                s1.push(s.charAt(i));
            }
        }
        return count;

    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna