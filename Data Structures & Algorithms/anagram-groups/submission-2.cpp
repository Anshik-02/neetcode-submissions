class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>m1;

        for(auto x:strs){

            string keys=x;
            sort(keys.begin(),keys.end());

            m1[keys].push_back(x);
        }

        vector<vector<string>>result;

        for(auto y:m1){
            result.push_back(y.second);
        }

return result;    
    }
};
