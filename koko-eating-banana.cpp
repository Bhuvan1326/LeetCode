long long func(vector<int> p,int h1)
{
    int n=p.size();
    long long totalhours=0;
    for(int i=0;i<n;i++)
    {
        totalhours+=((long long)p[i]+h1-1)/h1;
    }
    return totalhours;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int n=piles.size();
        int ans=1;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,piles[i]);
        }
        int high=ans;
        int ans1=INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long totalhours=func(piles,mid);

            if(totalhours<=h)
            {
                ans1=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans1;
    }
};