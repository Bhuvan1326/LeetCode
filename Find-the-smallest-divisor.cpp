bool func(vector<int>nums,int limit, int mid)
{
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=(nums[i]+mid-1)/mid;
    }
    return sum<=limit;
}
class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
       int n=nums.size();
       int low=1;
       int high=1;
       for(int i=0;i<n;i++)
       {
        high=max(nums[i],high);
       }
       while(low<=high)
       {
        int mid=low+(high-low)/2;
        if(func(nums,limit,mid))
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
       }
       return low;
    }
};