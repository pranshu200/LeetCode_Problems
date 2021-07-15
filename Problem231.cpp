/* 231. Power of Two*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>=1)
        {   
            return ((n & (n-1))==0);
        }
        return false;
    }
};