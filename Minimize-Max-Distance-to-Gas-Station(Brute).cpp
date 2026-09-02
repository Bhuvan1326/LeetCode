class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
       int n=arr.size();
       vector<int>howMany(n-1,0);
        for(int gasStation=1;gasStation<=k;gasStation++)
        {
            int maxIndex=-1;
            long double maxSection=-1;
            for(int i=0;i<n-1;i++)
            {
                long double diff=(arr[i+1]-arr[i]);
                long double sectionLength=diff/(long double)(howMany[i]+1);
                if(sectionLength>maxSection)
                {
                    maxSection=sectionLength;
                    maxIndex=i;
                }

            }
            howMany[maxIndex]++;
        }
        long double maxAns=-1;
        for(int i=0;i<n-1;i++)
        {
           long double diff=(arr[i+1]-arr[i]);
           long double sectionLength=diff/(long double)(howMany[i]+1);
           maxAns=max(maxAns,sectionLength);
        }
        return maxAns;
       
    }
};