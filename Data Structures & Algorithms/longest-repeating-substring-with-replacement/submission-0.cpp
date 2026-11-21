class Solution {
public:
    int characterReplacement(string s, int k) {
    int left=0;
    int right=0;
    int maxFreq=0;
    int maxLen=0;
    int n=s.size();
    map<char,int>m1;
    while(right<n){
        m1[s[right]]++;    

        maxFreq=max(maxFreq,m1[s[right]]);

        while(right-left+1 - maxFreq > k){
            m1[s[left]]--;
            left++;
        }

            maxLen = max(maxLen, right-left+1);

    right++;




    }
return maxLen;

    }
};
