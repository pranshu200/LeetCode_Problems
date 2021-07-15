/* 342. Power of Four */

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
        if(n<4) return false;
        long long int res=1;
        while(res<n)
        {
            res=res*4;
        }
        if(n==res)
            return true;
        else
            return false;
    }
};