#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(),x.end()
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<int> a(n);
        ll sumB=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sumB+=a[i];
        }
        if(sumB==0)
        {
            cout << 0 << endl;
            continue;
        }
        sort(all(a),greater<int>());
        int i=0;
        ll bought=0;
        while(c!=0 && i<n)
        {
            if(c>=a[i])
            {
                c-=a[i];
                bought+=a[i];
                i++;
            }
            else
            {
                bought+=c;
                c=0;
            }
        }
        cout << fixed << setprecision(6) << 100*(double(bought) / sumB) << endl;
    }
    return 0;
}