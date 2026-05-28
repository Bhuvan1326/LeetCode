int func(vector<int>nums,int k)
{
    int arr=1,karr=0;
    for(int i=0;i<nums.size();i++)
    {
        if(karr+nums[i]<=k)
        {
            karr+=nums[i];
        }
        else
        {
            arr++;
            karr=nums[i];
        }
    }
    return arr;
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0;
        int high=0;
        if(k>n) return -1;
        for(int i=0;i<n;i++)
        {
            low=max(nums[i],low);
            high+=nums[i];
        }
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int arr=func(nums,mid);
            if(arr<=k)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};