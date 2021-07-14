/* 6. ZigZag Conversion */

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        vector<string> str(numRows);
        int l=0;
        for(int i=0;i<=numRows;i++)
        {
            if(i<=numRows-1 && l<s.length())
            {
                str[i]+=s[l++];
            }
            else if(l<s.length())
            {
                for(int j=i-2;j>0;j--)
                {   
                    if(l<s.length())
                        str[j]+=s[l++];
                }
                i=-1;
            }
            else
            {
                break;
            }
        }
        string res;
        for(int i=0;i<str.size();i++)
        {
            res+=str[i];      
        }
        return res;
    }
};