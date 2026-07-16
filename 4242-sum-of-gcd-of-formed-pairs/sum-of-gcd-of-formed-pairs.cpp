class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mxi = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            mxi = max(nums[i], mxi);
            prefixGcd.push_back(gcd(nums[i], mxi));
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int left = 0, right = nums.size() - 1;

        long long ans = 0;

        while(left < right)
        {
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }

        return ans;
    }
};