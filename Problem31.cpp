/* 31. Next Permutation*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    if(nums.size()<=1) return;
    int c=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]<nums[i+1])
        {
            c++;
        }
    }
    if(c==0)
    {
        reverse(nums.begin(),nums.end());
        return;
    }
    int temp=-1,i,j;
    for(i=nums.size()-1;i>=0;i--)
    {   
        if(nums[i]>nums[i-1])
        {   
            i--;
            break;
        }
    }
    for(j=i+1;j<nums.size();j++)
    {
        if(nums[j]>nums[i])
            temp=j;
    }
    swap(nums[i],nums[temp]);
    sort(nums.begin()+i+1,nums.end());
    return;
    }
};