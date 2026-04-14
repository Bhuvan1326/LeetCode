class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2,int m) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        vector <int> u;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<num2[j])
            {
                i++;
            }
            else if(nums1[i]>num2[j])
            {
                j++;
            }  
            else
            {
                u.push_back(nums1[i]);
                i++;
                j++;
            } 
            
        }
       

        return u;
    }
};