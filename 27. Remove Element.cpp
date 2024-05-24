class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        
            for(int i=0;i<n;++i){
                if(nums[i]==val){
                    if(i==n-1){
                        n--;
                    }
                    else{
                        for(int j=i;j<n-1;++j){
                            nums[j] = nums[j+1];
                        }
                        i--;
                        n--;
                    }

                }
            }
        
        return n;
    }
};