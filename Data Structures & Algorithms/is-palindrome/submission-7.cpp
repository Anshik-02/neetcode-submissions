class Solution {
public:
    bool isPalindrome(string s) {
         string text = s;

        for (char &c : text) {
            c = tolower(c);
        }

        text.erase(remove_if(text.begin(), text.end(),
            [](char c) {
                return !isalnum(c);
            }), text.end());

        int n = text.length();
int left=0;
int right=n-1;

while(left<right){
    if(text[left]==text[right]){
        left++;
        right--;
    }
else{
return false;
}
}

return true;
    }
};
