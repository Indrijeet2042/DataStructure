class Solution {
public:
    int digitProduct(int n)
    {
        int product = 1;
        while(n>0)
        {
            int digit = n%10;
            product *= digit;
            n /= 10;
        }
        return product;

    }
    int smallestNumber(int n, int t) {
        int mini = 0;
        while(true)
        {
            if(digitProduct(n)%t == 0)
            {              
               mini = n;
               break;
            }
            n+=1;
        }
        return mini;
    }
};