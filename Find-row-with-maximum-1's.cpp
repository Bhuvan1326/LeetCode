int ub(vector<int>&mat,int m)
{
    int low=0,high=m-1;
    int cnt=m;
    while(low<=high)
    {
    int mid=low+(high-low)/2;
    if(mat[mid]==1)
    {
        cnt=mid;
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
    }
    return m-cnt;
}
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int max_count=0;
    int index=-1;
    int n=mat.size();
    int m=mat[0].size();
    int low=0,high=n-1;
    for(int i=0;i<n;i++)
    {
        int cnt=ub(mat[i],m);
        if(cnt>max_count)
        {
            max_count=cnt;
            index=i;
        }
    }
    return index;
  }
};