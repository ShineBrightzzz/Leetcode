class Solution {
public:
    static bool compareAlphabetically(int a, int b) {
        return std::to_string(a)+std::to_string(b) > std::to_string(b)+std::to_string(a);
    }

    string largestNumber(vector<int>& nums) {
        string res;
        sort(nums.begin(),nums.end(),compareAlphabetically);
        for(int i=0;i<nums.size();i++){
            res+=to_string(nums[i]);
        }
        if(res[0]=='0') return "0";
        else return res;
    }
};