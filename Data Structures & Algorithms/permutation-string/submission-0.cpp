class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);

        for (auto x : s1) {
            freq[x - 'a']++;
        }

        int windowSize = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            int windInd = 0;
            int idx = i;
            vector<int> freq2(26, 0);

            while (windInd < windowSize && idx < s2.size()) {
                freq2[s2[idx] - 'a']++;
                windInd++;
                idx++;
            }

            if (windInd == windowSize && freq == freq2) {
                return true;
            }
        }

        return false;
    }
};