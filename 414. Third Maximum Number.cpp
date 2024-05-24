class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maxCount=1;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            if(maxCount==3){
                return nums[i];
            }
            
            ++maxCount;
        }
        return nums[0];

    }
};