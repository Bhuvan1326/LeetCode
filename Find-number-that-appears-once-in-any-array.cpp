class Solution{
    public:
    int singlenumber(vector<int> & nums)
    {
        int x=0;
        for(int num:nums)
        {
            x=x^num;
        }
        return x;
    }
}