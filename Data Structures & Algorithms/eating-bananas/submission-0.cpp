class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int left=1;
        int right=*max_element(piles.begin(),piles.end());

        while(left<=right){

            int mid=left+(right-left)/2;
            int hrs=0;

            for(auto pile:piles){
                hrs+=(pile+mid-1)/mid;
            }
               if (hrs <= h) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
      


        }
  return left;



    }
};