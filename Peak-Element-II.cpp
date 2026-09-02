int row1(vector<vector<int>>& mat,int m,int n,int mid)
{
    int maxValue=-1;
    int index=-1;
    for(int i=0;i<mat.size();i++)
    {
        if(mat[i][mid]>maxValue)
        {
            maxValue=mat[i][mid];
            index=i;
        }
    }
    return index;
}

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int row= row1(mat,n,m,mid);
            int left=mid-1>=0 ?  mat[row][mid-1]:-1;
            int right=mid+1<m ? mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right) return {row,mid};
            else if(mat[row][mid]<left) high=mid-1;
            else low=mid+1;
        } 
        return {-1,-1};
    }
};