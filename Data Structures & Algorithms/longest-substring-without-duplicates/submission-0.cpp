class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int longest = 0;
        int n = s.size();
        unordered_set<int> s1;
        while (right < n) {
            while (s1.find(s[right]) != s1.end()) {
                s1.erase(s[left]);
                left++;
            }

            s1.insert(s[right]);
            longest = max(longest, right - left + 1);
            right++;
        }

        return longest;
    }
};
