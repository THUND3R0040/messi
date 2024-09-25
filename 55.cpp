#include <bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(),x.end()
#define endl '\n'
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
        set<int> s;
        ll sumB=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sumB+=a[i];
        
        }
        if(sumB==0)
        {
            cout << 0 << endl;
            return 0;
        }
        sort(all(a),greater<int>());
        int i=0;
        ll bought=0;
        while(c!=0 && i<n)
        {
            if(s.find(a[i])==s.end())
            {
                s.insert(a[i]);
                if(c>=100)
                {
                    c-=100;
                    bought+=100*a[i];
                    i++;
                }
                else
                {
                    bought+=c*a[i];
                    c=0;
                }
            }
            else
            {
                i++;
            }
        }
        cout << fixed << setprecision(6) << double(bought) / sumB;
    }
    return 0;
}