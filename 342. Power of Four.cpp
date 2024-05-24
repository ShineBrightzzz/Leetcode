class Solution {
public:
    int powerOfFour(int n){
        if(n==0){
            return 1;
        }else{
            return 4*powerOfFour(n-1);
        }
    }

    bool isPowerOfFour(int n) {
        int i=0;
        while(powerOfFour(i)<=n){
            if(powerOfFour(i)==n){
                return true;
            }
            if(powerOfFour(i)>INT_MAX/4){
                return false;
            }
            ++i;
        }
        return false;
    }
};