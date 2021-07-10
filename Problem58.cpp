/* 58. Length of Last Word*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        int res=0;
        
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                res++;
            }
            else
            {
                if(res>0)
                {
                    return res;
                }
            }
        }
        return res;
    }
};