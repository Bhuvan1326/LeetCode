class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int mj;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                mj=nums[i];
            }
            else if(nums[i]==mj)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==mj) cnt1++;

            if(cnt1>n/2)
            {
                return mj;
            }
        }
        return -1;
        
    }
};