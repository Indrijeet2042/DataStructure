class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1);
        for (int x : nums)
            freq[x]++;

        vector<long long> cntG(mx + 1);

        for (int i = mx; i >= 1; i--) {
            long long c = 0;
            for (int j = i; j <= mx; j += i)
                c += freq[j];

            cntG[i] = c * (c - 1) / 2;

            for (int j = 2 * i; j <= mx; j += i)
                cntG[i] -= cntG[j];
        }

        vector<long long> pref(mx + 1);
        for (int i = 1; i <= mx; i++)
            pref[i] = pref[i - 1] + cntG[i];

        vector<int> ans;
        for (long long q : queries) {
            int g = lower_bound(pref.begin() + 1, pref.end(), q + 1) - pref.begin();
            ans.push_back(g);
        }

        return ans;
    }
};