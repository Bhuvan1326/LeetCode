class Solution{
public:
    int  subArraysum(vector<int> &nums,int k)
    {
        unordered_map<int,int> mp;
        mp[0]=1;
        int n=nums.size();
        int sum=0;
        int count=0;
        for(int right=0;right<n;right++)
        {
            sum=sum+nums[right];
            if(mp.find(sum-k)!=mp.end)
            {
                count=count+mp[count-k];
            }
            mp[sum]++;
        }
        return count;
    }
}