/* 169. Majority Element */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
         for(auto x:freq)
         {
             if(x.second>(nums.size()/2))
                 return x.first;
         }
        return 0;
    }
};