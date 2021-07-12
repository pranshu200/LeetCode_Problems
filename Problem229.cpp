/* 229. Majority Element II */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
         for(auto x:freq)
         {
             if(x.second>(nums.size()/3))
                 result.push_back(x.first);
         }
        return result;
    }
};