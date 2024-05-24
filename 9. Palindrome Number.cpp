class Solution {
public:
    int palidrome(int x,int res=0){
        if(x==0){
            return res;
        }else{
            int digit = x%10;
            if(res>INT_MAX/10)
                return false;
            res = res*10+digit;
            return palidrome(x/10,res);
        }
    }

    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        if(x==palidrome(x)){
            return true;
        }
        else{
            return false;
        }        
    }
};