int func(vector<int>weights,int cap)
{
    int days=1,load=0;
    for(int i=0;i<weights.size();i++)
    {
        if((load+weights[i])>cap)
        {
            days++;
            load=weights[i];
        }
        else
        {
            load+=weights[i];
        }
    }
    return days;
}
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int low=1;
        for(int i=0;i<n;i++)
        {
            low=max(weights[i],low);
            sum+=weights[i];
        }
        int high=sum;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int requireddays=func(weights,mid);
            if(requireddays<=days)
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