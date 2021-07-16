/*16. 3Sum Closest*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int result,ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {   
            int last=nums.size()-1,next=i+1;
            while(next<last)
            {   
                int sum=nums[i]+nums[next]+nums[last];
                if(sum==target)
                {
                    return sum;
                }
                else if(ans>abs(sum-target))
                {   
                    ans=abs(sum-target);
                    result=sum;
                }
                else if(sum>target)
                {
                    last--;
                }
                else
                {
                    next++;
                }
            }                  
        }
        return result;
    }
};