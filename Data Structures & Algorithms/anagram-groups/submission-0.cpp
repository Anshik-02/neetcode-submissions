class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map1;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());

            map1[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto x : map1) {
            ans.push_back(x.second);
        }

        return ans;
    }
};