/*1685. Sum of Absolute Differences in a Sorted Array */

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        int Rsum=accumulate(nums.begin(), nums.end(), 0), Lsum=0;
        for(int i=0;i<n;i++)
        { 
            Rsum=Rsum-nums[i];
            result.push_back((i*nums[i]-Lsum)+(Rsum-(n-1-i)*nums[i]));
            Lsum+=nums[i];
        }
        return result;
    }
};