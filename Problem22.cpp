/* 22. Generate Parentheses */

class Solution {
public:
    void bracket(vector<string> &result, string &str, int op, int cl)
    {
        if(op==0 && cl==0)
        {
            result.push_back(str);
            return;
        }
        if(op>0)
        {
            str.push_back('(');
            bracket(result,str,op-1,cl);
            str.pop_back();
        }
        if(cl>0)
        {   
            if(op<cl)
            {  
                str.push_back(')');
                bracket(result,str,op,cl-1);
                str.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string str;
        bracket(result,str,n,n);
        return result;
    }
};