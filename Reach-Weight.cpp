#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
     int n;
     cin>>n;
     int sum=0;
     if(n==2) cout<<30<<endl;
     else if(n==1) cout<<20<<endl;
     else if(n%2==0) 
     {
        cout<<(n/2)*30<<endl;
     }
    else      
    {
        sum+=20;
        n=n-1;
        sum+=(n/2)*30;
        cout<<sum<<endl;
     }
 }
 return 0;
}
