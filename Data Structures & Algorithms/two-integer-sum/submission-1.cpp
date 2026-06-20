class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    map<int,int>s1;


    for(int i=0;i<nums.size();i++){

    int compliment= target-nums[i];
  if (s1.count(compliment)){
    return {s1[compliment],i};

  }
    
 s1[nums[i]] = i;

    }    
    }
};