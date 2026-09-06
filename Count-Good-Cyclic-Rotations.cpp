class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int half = n/2;
        long long total=0,left=0;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        for(int i=0;i<half;i++)
        {
            left+=nums[i];
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(left>total-left) res++;
            left -=nums[i];
            left+=nums[(i+half)%n];
        }
        return res;
    }
};