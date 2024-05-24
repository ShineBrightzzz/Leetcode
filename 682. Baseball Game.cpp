#include <numeric> 

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        for(auto op:operations){
            if(op=="C"){
                res.pop_back();
            }else if(op=="D"){
                res.push_back(res.back()*2);
            }else if(op=="+"){
                int top1 = res.back();
                int top2 = res[res.size()-2];

                res.push_back(top1+top2);
            }else{
                res.push_back(stoi(op));
            }
        }
        return std::accumulate(res.begin(),res.end(),0);
    }
};
