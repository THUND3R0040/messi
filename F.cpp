#include<bits/stdc++.h>
#define endl '\n'
#define ull unsigned long long
#define ll long long
using namespace std;







void solve()
{
    int n ;cin>>n;
    vector <int> a(n);
    
    vector <int> ones (n+1,0);
    vector <int> zeros (n+1,0);
    int h = 1;
    ones [0] = 0;
    zeros[0] = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(i>0){
            if(a[i]==1){
                ones[h]=ones[h-1]+1;
            }
            else{
                ones[h]=ones[h-1];
            }

            if(a[i]==0){
                zeros[h]=zeros[h-1]+1;
            }
            else{
                zeros[h]=zeros[h-1];
            }
        }
        else{
            if(a[i]==1){
                ones[h]=1;
            }
            else if(a[i]==0){
                zeros[h]=1;
            }
        }
        h++;
    
    }
    int q ;cin>>q;
    ll c;
    int l,r;
    int x;
    for (int i =0;i<q;i++){
        cin>>l>>r;
        if(l==r){
            cout << 0 << '\n';
            continue;
        }

        x = r-l+1;
        c = x*(x-1)/2;
        
        int yy = zeros[r]-zeros[l-1]; 
        int xx = ones[r]-ones[l-1];
        
        int zz = yy*xx + yy*(yy-1)/2;
        

        
        cout << c-zz<<'\n';
    }


    
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