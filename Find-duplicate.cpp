class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int c : nums) {
            if(seen.count(c)) {
                return c;
            }
            seen.insert(c);
        }

        return ' '; 
    }
};