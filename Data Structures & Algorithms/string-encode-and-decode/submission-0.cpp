class Solution {
public:

    string encode(vector<string>& strs) {
  string s;
for(auto x:strs){
    
  
    s+=to_string(x.length());
    s+="#";
    s+=x;
}
    
return s;
    }

    vector<string> decode(string s) {


    int start=0;
vector<string> ans;
    while( start < s.size()){

        int hash=start;
        while(s[hash]!='#'){
            hash++;
        }


    int length = stoi(s.substr(start, hash - start));

    string word = s.substr(hash + 1, length);

    ans.push_back(word);

    start = hash + 1 + length;


    }
   return ans;

    }
};
