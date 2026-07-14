class Solution {
public:
    static const int MOD = 1e9 + 7;
    int dp[201][201][201];

    int solve(int idx, int gcdA, int gcdB, vector<int>& nums) 
    {
        if (idx == nums.size()) {
            return (gcdA == gcdB && gcdA != 0);
        }

        if (dp[idx][gcdA][gcdB] != -1)
            return dp[idx][gcdA][gcdB];

        long long ans = 0;

        ans += solve(idx + 1, gcdA, gcdB, nums);
        ans += solve(idx + 1, gcd(gcdA, nums[idx]), gcdB, nums);
        ans += solve(idx + 1, gcdA, gcd(gcdB, nums[idx]), nums);

        return dp[idx][gcdA][gcdB] = ans % MOD;
    }

    int subsequencePairCount(vector<int>& nums) {

        memset(dp, -1, sizeof(dp));

        return solve(0, 0, 0, nums);
    }
};