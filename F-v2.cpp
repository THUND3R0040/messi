#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

 
 
void solve()
{
    int n ;cin>>n;
    vector <int> a(n);
    string ch ="";
    for(int i =0;i<n;i++){
        ch+='0';
    }
    bool test = false;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if (i>0){
            if((a[i]==0 && (a[i-1]==1 || a[i-1]==0)) || (a[i]==1 && a[i-1]==0)){
                ch[i] = '1';
            }
        }
    }
    int q ;cin>>q;
    int c;
    int l,r;
    int x;
    int countx;
    for (int i =0;i<q;i++){
        cin>>l>>r;
        x = r-l+1;
        countx = count(ch.begin()+l-1,ch.begin()+r,'1');
        c = x*x-1/2;
        cout << c-countx<<'\n';
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