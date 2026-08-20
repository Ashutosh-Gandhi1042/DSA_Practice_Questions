class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, vector<int>> mp;

        for (auto &seat : reservedSeats) {
            mp[seat[0]].push_back(seat[1]);
        }

        long long count = 2LL * (n - mp.size());

        for (auto &[row, seats] : mp) {

            bool left = true;
            bool middle = true;
            bool right = true;

            for (int seat : seats) {

                if (seat >= 2 && seat <= 5)
                    left = false;

                if (seat >= 4 && seat <= 7)
                    middle = false;

                if (seat >= 6 && seat <= 9)
                    right = false;
            }

            if (left && right)
                count += 2;
            else if (left || middle || right)
                count += 1;
        }

        return (int)count;
    }
};


/*class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        // vector<vector<int>>v1(n,vector<int>(10,0));
        // using vectors we will be getting memory error since there are 10^9
        // rows and rows*10 total cells and integer takes 4 bits...
        unordered_map<int, vector<int>> mp1;
        for (int i = 0; i < reservedSeats.size(); i++) {
            mp1[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
        }
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (mp1[i].size() == 0) {
                count += 2;
                continue;
            } else {
                bool left = true;
                bool right = true;
                bool mid = true;
                for (int seat : mp1[i]) {

                    if (seat >= 2 && seat <= 5)
                        left = false;

                    if (seat >= 4 && seat <= 7)
                        mid = false;

                    if (seat >= 6 && seat <= 9)
                        right = false;
                }

                if (left && right)
                    count += 2;
                else if (left || mid || right)
                    count += 1;
            }
        }
        return count;
        for(int i=0;i<reservedSeats.size();i++)
        {
            v1[reservedSeats[i][0]-1][reservedSeats[i][1]-1]=1;
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            bool left = true;
            bool right = true;
            bool mid = true;
            for (int j = 1; j < 5; j++) {
                if (v1[i][j] == 1) {
                    left = false;
                }
            }

            for (int j = 3; j < 7; j++) {
                if (v1[i][j] == 1) {
                    mid = false;
                }
            }

            for (int j = 5; j < 9; j++) {
                if (v1[i][j] == 1) {
                    right = false;
                }
            }
            if (left && right) {
                count += 2;
                continue;
            }
            if (left || right || mid) {
                count += 1;
            }
        }
        return count;
    }
};*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna