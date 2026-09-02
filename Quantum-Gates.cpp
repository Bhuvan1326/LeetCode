/*Problem C - Quantum Gates
You are given N quantum gates in a straight line. From gate i, you may jump to any gate j > i. Jump
Cost = |Ai - Aj| × (j - i). You have at most K Quantum Passes. Using a pass makes a jump cost 0.
Find the minimum total energy required to reach gate N from gate 1.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
 
int main()
{
    int N,K;
    cin>>N>>K;
    vector<long long> A(N+1);
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];
    }
    vector<vector<long long>> dp(N+1,vector<long long>(K+1,LLONG_MAX));
    dp[1][0] = 0;
    for(int i=1;i<=N;i++)
    {
        for(int p=0;p<=K;p++)
        {
            if(dp[i][p] == LLONG_MAX) continue;
            for(int j=i+1;j<=N;j++)
            {
                long long cost = abs(A[i] - A[j]) * 1LL * (j - i);
                dp[j][p] = min(dp[j][p], dp[i][p] + cost);
                
                if(p<K)
                {
                    dp[j][p+1] = min(dp[j][p+1], dp[i][p]);
                }
            }
        }
       
    }
     long long ans=LLONG_MAX;
        for(int p=0;p<=K;p++)
        {
            ans = min(ans, dp[N][p]);
        }
    cout << "Minimum total energy required: " << ans<< endl;
    return 0;
}