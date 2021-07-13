/* 1556. Thousand Separator */

class Solution {
public:
    string thousandSeparator(int n) {
        
        if(n<1000)  return to_string(n);
        string result, num=to_string(n);
        int i=0;
        for(int j=num.length()-1;j>=0;j--)
        {   
            result+=num[j];
            i++;
            if(j!=0 && i==3)
            {
                result+=".";
                i=0;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};