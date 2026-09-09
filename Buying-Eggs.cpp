#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,Y,F;
    cin>>X>>Y>>F;
    int res1=X*12;
    int res2=(Y*12)+F;
    int res=min(res1,res2);
    cout<<res<<endl;
    
 return 0;
}
