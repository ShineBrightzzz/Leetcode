class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(missingNum!=nums[i]){
                return missingNum;
                
            }
            ++missingNum;
        }
        return missingNum++;
    }
};