class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m1;

        for (auto x : nums) {
            m1[x]++;
        }


        vector<vector<int>> buckets(n + 1);
        for (auto p : m1) {
            int element = p.first;
            int frequency = p.second;
            buckets[frequency].push_back(element);
        }

        vector<int> result;
        for (int i = n; i >= 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};