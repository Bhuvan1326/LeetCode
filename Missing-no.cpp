class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        int ans1=0;
        int ans2=0;
        for(int i=1;i<=n;i++)
        {
            ans1^=i;
        }
        for(int x:arr)
        {
            ans2^=x;
        }
        return ans1^ans2;
    }
};