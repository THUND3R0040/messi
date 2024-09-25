#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {   
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==14) cout << "YES" << endl;
    else cout << "NO" << endl;
}