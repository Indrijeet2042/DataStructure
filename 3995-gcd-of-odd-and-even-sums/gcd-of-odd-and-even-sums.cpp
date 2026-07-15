class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int Sn_odd = n*n;
        int Sn_even = n*(n+1);
        int val = min(Sn_odd, Sn_even);
        int gcd = INT_MIN;

        for(int i=1; i<=n; i++)
        {
             if(Sn_odd%i == 0 && Sn_even%i == 0)
             gcd = i;
        }
        return gcd;
    }
};