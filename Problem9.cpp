/*9. Palindrome Number*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int res=0;
        int s=x;
        while(x)
        {
            res=res*10 + x%10;
            x=x/10;
        }
        if(s==res)
            return true;
        else
            return false;
    }
};