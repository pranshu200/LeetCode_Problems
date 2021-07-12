/* 500. Keyboard Row */

class Solution {
public:
 bool inrow(string v,string s)
    {
        for(int i=1;i<s.length();i++)
        {
            if(v.find(tolower(s[i]))==-1)
                return false;
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> keybord={"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string> result;
        bool temp;
        for(int i=0;i<words.size();i++)
        {  
                if(keybord[0].find(tolower(words[i][0]))!=-1)
                {
                    temp=inrow(keybord[0],words[i]);
                }
                else if(keybord[1].find(tolower(words[i][0]))!=-1)
                {
                   temp=inrow(keybord[1],words[i]);
                }
                else if(keybord[2].find(tolower(words[i][0]))!=-1)
                {
                    temp=inrow(keybord[2],words[i]);
                }
                else
                {
                    temp=false;
                }
                if(temp==true)
                {
                    result.push_back(words[i]);
                }            
        }
        return result;
    }
};