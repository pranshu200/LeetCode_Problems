/* 26. Remove Duplicates from Sorted Array */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<1) return 0;
        int res=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[res]!=nums[i])
            {
                res++;
                nums[res]=nums[i];
            }
        }
          return res+1;  
    }
};