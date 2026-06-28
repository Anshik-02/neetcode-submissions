class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
map<int,int>m1;
vector<pair<int,int>>v1;


for(auto x:nums){
    m1[x]++;
}
for(auto y:m1){
    v1.push_back({y.first,y.second});
}

sort(v1.begin(), v1.end(), [](pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
});

vector<int>final;

for(int i=0;i<k;i++){
    final.push_back(v1[i].first);

}

return final;

    }
};