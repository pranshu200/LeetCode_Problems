/* 66. Plus One */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size();
        int sum=0, carry=0;
        for(int i=l-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]+=1;
                break;
            }
            else
                digits[i]=0;
        }
        if(digits[0]==0)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
        
    }
};