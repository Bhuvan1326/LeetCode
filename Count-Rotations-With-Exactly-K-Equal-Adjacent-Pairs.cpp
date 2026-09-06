class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            int score=0;
            for(int j=0;j<n-1;j++)
            {
                if(s[j]==s[j+1]) score ++;
            }
            if(score==k) res++;
            char first = s[0];
            for(int j=0;j<n-1;j++)
            {
                s[j]=s[j+1];
            }
            s[n-1]=first;
        }
        return res;
    }
};