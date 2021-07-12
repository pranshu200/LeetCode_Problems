/* 12. Integer to Roman */

class Solution {
public:
    string intToRoman(int num) {
        string res;
       vector<string> roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> digit={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int i=0;
       while(num!=0)
       {
         if(num>=digit[i])
         {
             res+=roman[i];
             num-=digit[i];
         }
           else
           {
               i++;
           }
       }
        return res;
    }
};