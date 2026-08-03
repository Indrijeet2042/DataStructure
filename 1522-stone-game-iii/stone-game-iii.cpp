class Solution {
public:
    int solve(int i, vector<int>& stoneValue, vector<int>& dp) {
        if (i >= stoneValue.size())
            return 0;

        if (dp[i] != INT_MIN)
            return dp[i];

        int sum = 0;
        int best = INT_MIN;

        for (int k = 0; k < 3 && i + k < stoneValue.size(); k++) {
            sum += stoneValue[i + k];
            best = max(best, sum - solve(i + k + 1, stoneValue, dp));
        }

        return dp[i] = best;
    }

    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();

        vector<int> dp(n, INT_MIN);

        int diff = solve(0, stoneValue, dp);

        if (diff > 0)
            return "Alice";
        if (diff < 0)
            return "Bob";
        return "Tie";
    }
};