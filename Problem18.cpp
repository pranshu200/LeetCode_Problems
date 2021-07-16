/* 18. 4Sum */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        if(nums.size()<4) return result;
        set<vector<int> > res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {   
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<nums.size()-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                else
                {
                    int left=j+1,right=nums.size()-1;
                    while(left<right)
                    {
                        if(nums[i]+nums[j]+nums[left]+nums[right]>target)
                            right--;
                       
                        else if(nums[i]+nums[j]+nums[left]+nums[right]==target)
                        {   
                            vector<int> v;
                            v.push_back(nums[i]);
                            v.push_back(nums[j]);
                            v.push_back(nums[left]);
                            v.push_back(nums[right]);
                            left++;
                            res.insert(v);
                        }
                        else
                            left++;
                    }
                    
                }
            }
        }
        for(auto itr:res)
            result.push_back(itr);
        return result;
            
    }
};