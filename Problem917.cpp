/*917. Reverse Only Letters*/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        string result;
        vector<pair<char,int>> symbol;
        for(int i=s.length()-1;i>=0;i--)
        {
            if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90))
            {
                result+=s[i];
            }
            else
            {
                symbol.push_back({s[i],i});
            }
        }
        for(int i=symbol.size()-1;i>=0;i--)
        {   
                string temp;
                temp+=symbol[i].first;
                result.insert(symbol[i].second,temp);
        }
        return result;
    }
};