

class Solution {
public:
    int powerOfTwo(int n){


        if(n==0){
            return 1;
        }else{
            return 2*powerOfTwo(n-1); 
        }
    }

    bool isPowerOfTwo(int n) {
        int i=0;
        while(powerOfTwo(i)<=n){
            if(powerOfTwo(i)==n){
                return true;
            }
            if(powerOfTwo(i)>INT_MAX/2){
                break;
            }

            i++;
        }
        return false;
    }

    

};