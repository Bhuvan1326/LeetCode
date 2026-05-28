class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int n=nums.size();
        int high=n-1;
        for(int i=0;i<n;i++)
        {
            int low=i+1;

            int ans=i;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(nums[i]+nums[mid]<target)
                {
                    ans=mid;
                    low=mid+1;
                } 
                else
                {
                    high=mid-1;
                }
            }
            cnt+=(ans-i);
        }
        return cnt;
    }
};