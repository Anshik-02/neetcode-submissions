class Solution {
public:
    bool isAnagram(string s, string t) {
        
    map<char,int> s1;
    map<char,int> t1;

    for(auto x:s)
    s1[x]++;
    
    for(auto x:t)
    t1[x]++;
    
    return s1==t1;
    }
};
