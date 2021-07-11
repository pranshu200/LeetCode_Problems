/*4. Median of Two Sorted Arrays*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0 && nums2.size()==0) 
            return 0;
        int i=0,j=0,len=(nums1.size()+nums2.size()), mid=len/2,k=0;
        vector<int> result;
        for(k=0;k<=mid+1;k++)
         {      
                if(i<nums1.size() && j<nums2.size())
                {
                    if(nums1[i]<=nums2[j])
                {
                    result.push_back(nums1[i++]);
                }
                else
                {
                    result.push_back(nums2[j++]);
                }
                }
                else
                {
                    if(i<nums1.size())
                    {
                        result.push_back(nums1[i++]);
                    }
                    if(j<nums2.size())
                     {
                    result.push_back(nums2[j++]);
                    }
                }
                
        }
        if(len%2!=0)
            return (double)result[mid];
        else
            return (result[mid]+result[mid-1])/2.0;
        return 0;
    }
};