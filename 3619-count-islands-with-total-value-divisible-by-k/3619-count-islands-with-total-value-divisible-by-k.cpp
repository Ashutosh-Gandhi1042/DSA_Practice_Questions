class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {

        queue<pair<int, int>> q1;
        vector<vector<int>> dir = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};
        int res = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int curr = 0;
                if (grid[i][j] > 0) {
                    q1.push({i, j});
                    curr = grid[i][j] % k;
                    grid[i][j] = -1;

                    while (!q1.empty()) {
                        pair<int, int> p = q1.front();
                        q1.pop();
                        for (int d = 0; d < 4; d++) {

                            int x = p.first + dir[d][0];
                            int y = p.second + dir[d][1];

                            if (x >= 0 && x < m && y >= 0 && y < n &&
                                grid[x][y] > 0) {

                                q1.push({x, y});

                                curr = (curr + grid[x][y] % k) % k;

                                grid[x][y] = -1;
                            }
                        }
                    }
                    if (curr == 0) {
                        res++;
                    }
                }
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna