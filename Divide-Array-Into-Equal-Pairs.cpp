class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums)
        {
            mp[num]++;
        }
        int count=0;
        for(auto n:mp)
        {
            int res=n.second/2;
            count +=res;
        }
        return count==nums.size()/2;
    }
};