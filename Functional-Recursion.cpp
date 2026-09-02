#include<bits/stdc++.h>
using namespace std;
int fun(int i)
{
    if(i==1) return 1;
    return i * fun(i-1);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fun(n);
    return 0;
}