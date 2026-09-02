class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int p=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                p=i;
                break;
            } 
        }
        if(p==-1)
            {
                sort(nums.begin(),nums.end());
                return;
            }
        for(int i=n-1;i>p;i--)
        {
            if(nums[i]>nums[p])
            {
                swap(nums[i],nums[p]);
                break;
            }
        }
        int i=p+1;
        int j=n-1;
        while(i<=j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};