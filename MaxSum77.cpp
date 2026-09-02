#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int len=n-k;
   for(int i=0;i<=k;i++)
   {
       int sum=0;
       for(int j=i;j<i+len;j++)
       {
           sum+=a[j];
       }
       maxsum=max(maxsum,sum);
   }
    cout<<maxsum<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
