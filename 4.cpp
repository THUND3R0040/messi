#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;int q;
    cin>>n>>q;
    vector <int> a (n,0);
    int c;
    while(q--){
        int l,r,p,k,v;
        cin>>c;
        if(c==1){
            cin>>l>>r;
            cout << accumulate(a.begin()+l-1,a.begin()+r,0) << '\n';
        }
        else{
            cin>>l>>r>>p>>k>>v;
            for(int i =l-1;i<r;i++){
                if((i+1)%p==k){
                    a[i]+=v;
                }
            }
        
            
        
    }}
    
   return 0;
    

    
}