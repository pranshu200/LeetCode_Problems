/* 15. 3Sum */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()<3) return result;
        set<vector<int> > res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {   
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int left=i+1,right=nums.size()-1;
            while(left<right)
            { 
                if(nums[i]+nums[left]+nums[right]>0)
                    right--;                       
                else if(nums[i]+nums[left]+nums[right]==0)
                {   
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[left]);
                    v.push_back(nums[right]);
                    left++;
                    res.insert(v);
                }
                else
                    left++;
            }                    
        }
        for(auto itr:res)
            result.push_back(itr);
        return result;
        
    }
};