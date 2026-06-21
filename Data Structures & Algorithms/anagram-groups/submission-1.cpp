class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    unordered_map<string ,vector<string>>map1;

     for(auto x:strs){

        string keys=x;
        sort(keys.begin(),keys.end());
        map1[keys].push_back(x);

       

     }
     vector<vector<string>>v1;
        for(auto s:map1){
            v1.push_back(s.second);

        }
return v1;


    }
};
 