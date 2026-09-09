#include <bits/stdc++.h>
using namespace std;
void sol()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N);
        
        int m=0,count=1;
        for(int i=1;i<N;i++)
        {
            if(A[i]==A[i-1])
            {
                count++;
            }
            else
            {
                m=max(count,m);
                count=1;
            }
        }
        m=max(count,m);
        cout<<(m+1)/2<<endl;
    }
}
int main() {
   sol();
}
