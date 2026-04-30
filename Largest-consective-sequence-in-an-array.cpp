class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> ans;
        int longest=1,cnt=1;
        for(int i=0;i<n;i++)
        {
            ans.insert(nums[i]);
        }
        for(auto it:ans)
        {
            if(ans.find(it-1)==ans.end())
            {
                cnt=1;
                int x=it;
                while(ans.find(x+1)!=ans.end())
                {
                    x=x+1;
                    cnt+=1;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};