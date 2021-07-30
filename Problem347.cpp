/* 347. Top K Frequent Elements */

class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b)
    {
        return (a.second>b.second);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> freq(mp.begin(),mp.end());
        sort(freq.begin(),freq.end(),comp);
        for(int i=0;i<k;i++)
        {
            res.push_back(freq[i].first);
        }
        return res;
    }
};