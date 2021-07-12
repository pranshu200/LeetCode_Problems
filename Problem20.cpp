/* 20. Valid Parentheses */

class Solution {
public:
    bool isValid(string s) {
    if(s.length()==1)
        return false;
    stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(st.empty())
                    return false;
                if(st.top()=='(' && s[i]==')')
                    st.pop();
                else if(st.top()=='{' && s[i]=='}')
                    st.pop();
                else if(st.top()=='[' && s[i]==']')
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};