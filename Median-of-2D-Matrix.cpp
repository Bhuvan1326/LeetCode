int up(vector<int>&matrix,int x,int n)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(matrix[mid]>x)
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
int bhu(vector<vector<int>>&matrix,int n,int m,int mid)
{
    int cnt=0;
    for(int i=0;i<matrix.size();i++)
    {
        cnt +=up(matrix[i],mid,m);
    }
    return cnt;
}
class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      int low=0;
      int high=n*m-1;
      while(low<=high)
      {
        int mid=low+(high-low)/2;
        int x=bhu(matrix,n,m,mid);
        int req=n*m/2;
        if(x<=req)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
      }
      return low;
    }
};