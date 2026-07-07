class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> store;

        while(n > 0)
        {
         int temp = n%10;
         if(temp != 0)
            store.push_back(temp);
         n /= 10;         
        }
        long long sum = 0;
        long long x = 0;
        long long y = 10;

        for(int i =0; i<store.size(); i++)
        {
            sum += store[i];
            x += store[i]*(y/10);
            y *= 10;
        }

        return sum*x;
    }
};