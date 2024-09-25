#include <bits/stdc++.h>
using namespace std;






int main(void){
    
    int t;cin>>t;
    while(t--){
        unordered_set<int> set;
        map<int,int> frogStep,rt;
        int n;cin>>n;
        int maxi =0;
        for(int i =0;i<n;i++){
            int x;cin>>x;
            if(x<=n){
                set.insert(x);
                frogStep[x]++;
            }   
        }

        
        int mult;
        
        cout << frogStep[2];
        for(auto i:set){
            mult = i;
            while(mult<=n){
                
                rt[mult]+=frogStep[i];
                mult += i;

            }
            
        }
    
        for (auto i :rt){
            
            maxi=max(maxi,i.second);
        }
        
        cout << maxi<<'\n';

        
        
    }
    

    
    return 0;
}