bool func(vector<int>position,int dist,int m)
{
    int n=position.size();
    int cntm=1,last=position[0];
    for(int i=1;i<n;i++)
    {
        if(position[i]-last>=dist)
        {
            cntm++;
            last=position[i];
        }
    }
    if(cntm>=m) return true;
    else return false;
}

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=0;
        int n=position.size();
        int high=position[n-1]-position[0];
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int canweplace=func(position,mid,m);
            if(canweplace==true)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};