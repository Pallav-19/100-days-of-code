class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int len = 0;
        vector<int> mpp(256, -1);
        int left = 0, right = 0;
        int n = s.size();
        for (; right < n; right++)
        {
            if (mpp[s[right]] != -1)
                left = max(left, mpp[s[right]] + 1);
            mpp[s[right]] = right;
            len = max(len, right - left + 1);
        }
        return len;
    }
};
//driver code