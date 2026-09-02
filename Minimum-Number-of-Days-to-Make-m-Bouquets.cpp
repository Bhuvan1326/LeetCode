bool func(vector<int>bloomDay,int day,int m,int k)
{
    int cnt=0;
    int noofd=0;
    for(int i=0;i<bloomDay.size();i++)
    {
        if(bloomDay[i]<=day)
        {
            cnt++;
        }
        else
        {
            noofd+=(cnt/k);
            cnt=0;
        }
    }
    noofd+=(cnt/k);
    if(noofd>=m) return true;
    else return false;
}
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val=m*1LL*k*1LL;
        int low=1;
        int high=1;
        for(int i=0;i<n;i++)
        {
            low=min(bloomDay[i],low);
            high=max(bloomDay[i],high);
        }
        int ans=high;
        if(val>n) return -1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(func(bloomDay,mid,m,k)==true)
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