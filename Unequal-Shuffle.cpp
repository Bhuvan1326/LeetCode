#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        string A,B;
        cin>>A>>B;
        int countA=0;
        int countB=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]=='a') countA++;
            if(B[i]=='a') countB++;
        }
        if(countA+countB == N ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
