class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector <int>a;
    for(auto &row:matrix){
        for(auto &column:row){
            a.push_back(column);
        }
    }     
    int n=a.size();
    int left=0;
    int right=n-1;

    while(left<=right){

        int mid=left+(right-left)/2;
        if(target==a[mid]){
            return true;
        }
        if(target>a[mid]){
            left=mid+1;
        }
        if(target<a[mid]){
            right=mid-1;
        }

    }
return false;
    }
};