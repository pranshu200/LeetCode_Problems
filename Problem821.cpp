/*821. Shortest Distance to a Character*/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.length();
        vector<int> result(n,INT_MAX);
        int temp=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
                temp=0;
                result[i]=temp;
            }
            else
            {
                if(temp!=INT_MAX)
                {
                    temp++;
                    result[i]=temp;
                }
            }
        }
        temp=INT_MAX;
        for(int j=n-1;j>=0;j--)
        {
            if(s[j]==c)
            {
                temp=0;
                result[j]=temp;
            }
            else
            {
                if(temp!=INT_MAX)
                {
                    temp++;
                    result[j]=min(result[j],temp);
                }
            }
            
        }
        return result;
    }
};