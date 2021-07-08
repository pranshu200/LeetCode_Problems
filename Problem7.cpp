/*7. Reverse Integer*/

class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        if(x/10==0) return x;
        while(x)
        {
            rev=rev*10+(x%10);
            x=x/10;
        }
        
        if(rev> INT_MAX || rev< INT_MIN)
            return 0;
        else
            return rev;
            
    }
};