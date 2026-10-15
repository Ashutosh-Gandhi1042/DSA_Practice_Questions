class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q1;
        q1.push(0);
        vector<int> vis(rooms.size(), -1);
        int count = 0;
        while (!q1.empty()) {
            int t = q1.front();
            if (vis[t] == -1) {
                count++;
                vis[t] = 1;
                for (int i = 0; i < rooms[t].size(); i++) {
                    q1.push(rooms[t][i]);
                }
            }
            q1.pop();
        }
        if (count == rooms.size()) {
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna