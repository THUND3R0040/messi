#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set <ll> a;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}