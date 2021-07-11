/* 125. Valid Palindrome */


class Solution {
public:
    bool isPalindrome(string s) {
        int l=s.length();
        string str;
        int i=0;
        while(i<l)              // to get a string with all alphanumeric values only;
        {
            if(s[i]>=65 && s[i]<=90)
            {
                str.push_back(s[i++]+32);
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                str.push_back(s[i++]);
            }
            else if(s[i]>=48 && s[i] <=57)
            {
                str.push_back(s[i++]);
            }
            else
                i++;
        }
        l=str.length();   
        if(l<1)             //for case s=" ";
            return true;
        for(int i=0; i<=l/2;i++)
        {
            if(str[i]!=str[l-1-i])
            {
                return false;
            }
        }
        return true;
    }
};