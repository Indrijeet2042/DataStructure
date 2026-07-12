class Solution {
public:

    string helper(int n, string &str)
    {
        if (n == 1)
            return str = "1";

        helper(n - 1, str);

        string ans = "";
        int count = 1;

        for (int i = 1; i <= str.size(); i++)
        {
            if (i < str.size() && str[i] == str[i - 1])
            {
                count++;
            }
            else
            {
                ans += to_string(count);
                ans += str[i - 1];
                count = 1;
            }
        }

        str = ans;
        return str;
    }

    string countAndSay(int n)
    {
        string str = "";
        return helper(n, str);
    }
};