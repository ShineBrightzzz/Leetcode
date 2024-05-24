class Solution {
public:
    int sumDigits(int num){
        int res=0;
        while(num>=1){
            res+=num%10;
            num/=10;
        }
        return res;
    }

    int addDigits(int num) {
        int res = sumDigits(num);
        while(res>=10){
            res=sumDigits(res);
        }
        return res;
    }
};