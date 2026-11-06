class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        for(auto str1:s){
            m1[str1]++;
        }
        for(auto str2:t){ 
            m2[str2]++;
        }
        if(m1==m2)return true;
        else return false;

    }
};
