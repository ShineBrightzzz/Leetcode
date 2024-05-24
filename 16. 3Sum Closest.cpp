class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestSum=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int tmpsum = nums[left]+ nums[right] + x;
                if(abs(tmpsum-target)<abs(closestSum-target)){
                    closestSum = tmpsum;
                }
                if(tmpsum==target){
                    return tmpsum;
                }
                else if(tmpsum<target){
                    ++left;
                }else if(tmpsum>target){
                    --right;
                }
            }
        }
        return closestSum;
    }
};