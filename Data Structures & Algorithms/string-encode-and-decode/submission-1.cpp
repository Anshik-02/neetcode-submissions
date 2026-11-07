class Solution {
   public:
    string encode(vector<string>& strs) {
        string line;
        for (int i = 0; i < strs.size(); i++) {
            line += to_string(strs[i].size()) + "#" + strs[i];
        }
        return line;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int i = 0;
        while (i < s.size()) {
            int hash = i;
            while (s[hash] != '#') {
                hash++;
            }

            int length = stoi(s.substr(i, hash - i));

            string word = s.substr(hash + 1, length);

            ans.push_back(word);

            i = hash + 1 + length;
        }

        return ans;
    }
};
