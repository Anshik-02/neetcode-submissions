class Solution {
public:
    int maxArea(vector<int>& heights) {
        
      int n=heights.size();
    int left=0;
    int right=n-1;
    int best=0;
    

    while(left<right){
    int ans=(right - left) * min(heights[left], heights[right]);
      best = max(best, ans);    
         if (heights[left] < heights[right])
        left++;
    else
        right--;


    }
return best;


    }
};
