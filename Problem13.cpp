/*13. Roman to Integer */

class Solution {
public:
    int values(char ch)
    {
        if(ch=='I')
            return 1;
        else if(ch=='V')
            return 5;
        else if(ch=='X')
            return 10;
        else if(ch=='L')
            return 50;
        else if(ch=='C')
            return 100;
        else if(ch=='D')
            return 500;
        else
            return 1000;
        
    }
    int romanToInt(string s) {
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            if((i+1)<s.length() && values(s[i])<values(s[i+1]))
            {
                res+=(values(s[i+1])-values(s[i]));
                i++;
            }
            else
                res+=values(s[i]);
        }
            return res;
    }
};