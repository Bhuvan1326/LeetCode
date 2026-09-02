class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>mid[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return low;
    }
};