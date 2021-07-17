/* 977. Squares of a Sorted Array */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int left=0,right=nums.size()-1,len=nums.size()-1;
        vector<int> result(nums.size());
        while(left<=right)
        {
            if(abs(nums[left])<abs(nums[right]))
            {
                result[len] = nums[right]*nums[right];
                right--;len--;
            }
            else
            {
                result[len--]=nums[left]*nums[left];
                left++;
            }
        }
        return result;
    }
};