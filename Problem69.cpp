/* 69. Sqrt(x) */

class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        else if(x<4) return 1;
        long long int low=1,mid;
        long long int high=x-1;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if((mid*mid)<=x && (mid*mid + 2*mid)>=x)
                return (int)mid;
            else if(mid*mid<x) low=mid;
            else high=mid;
        }
        return (int)mid;
    }
};