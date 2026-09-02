int func(vector<int>nums,int pages)
{
    int stud=1,pagesStud=0;
    for(int i=0;i<nums.size();i++)
    {
        if(pagesStud+nums[i]<=pages)
        {
            pagesStud+=nums[i];
        }
        else
        {
            stud++;
            pagesStud=nums[i];
        }
    }
    return stud;
}
class Solution {
public:
    int findPages(vector<int> &nums, int m)  {
        
        int n=nums.size();
        if(m>n) return -1;
        int low=0;
        int high=0;
        for(int i=0;i<n;i++)
        {
            low=max(nums[i],low);
            high+=nums[i];
        }
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int cntStud=func(nums,mid);
            if(cntStud<=m)  
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};