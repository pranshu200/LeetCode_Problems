/* 1624. Largest Substring Between Two Equal Characters */

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int res=-1;
        for(int i=0;i<s.length();i++)
        {
            int j=i+1;
            while(j<s.length())
            {
                if(s[i]==s[j])
                {
                   res=max(res,j-i-1); 
                }
                j++;
            }
        }
        return res;
    }
};