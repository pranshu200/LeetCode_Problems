/*27. Remove Element */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        int k=n-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
               count++;
                for(int j=k;j>i;j--)
                {
                    if(nums[j]!=val && nums[j]!=INT_MIN)
                    {
                        nums[i]=INT_MIN;
                        swap(nums[i],nums[j]);
                        k=j;
                        break;
                    }
                }
            }
        }
        return n-count;
    }
};