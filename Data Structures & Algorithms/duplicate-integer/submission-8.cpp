class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int>m1;
for(auto x : nums){
    if(m1.count(x))return true;
    m1.insert(x);
}
return false;

    }
};