class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n=grid.size();
        long long N=n*n;
        long long x=0,y=0;
        long long s=0,s2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
           long long val=grid[i][j];
           s=s+val;
           s2=s2+val*val;
            }
        }
        long long sn=N*(N+1)/2;
        long long s2n=N*(N+1)*(2*N+1)/6;
        long long diff=s-sn;
        long long sqDiff = s2 - s2n;      

        long long sumXY = sqDiff / diff; 

       y = (diff + sumXY) / 2; 
       x = sumXY - y;         

        return {(int)y, (int)x};
        

    }
};