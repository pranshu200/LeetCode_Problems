/* 1903. Largest Odd Number in String */

class Solution {
public:
    string largestOddNumber(string num) {
        int temp=-1;
        string res;
        for(int i=num.length()-1;i>=0;i--)
        {
            if(num[i]%2!=0)
            {
                res=num.substr(0,i+1);
                break;
            }
        }
        return res;
    }
};