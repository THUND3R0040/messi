#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map<int,int> el;
 
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> frogStep;
        el.clear();
        int len=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x<=n){
                el[x]++;
                frogStep.push_back(x);
                len++;
            }
        }
        
        for(int i=0;i<len;i++){
            int mult = frogStep[i];
            while(mult<n){
                mult += frogStep[i];
                if(mult<=n){
                    el[mult]++;
                } 
            }
        }
 
        if(el.size()==0){
            cout<<0<<'\n';
        }
        else{
            auto it = max_element(el.begin(),el.end(),[](const auto &x,const auto &y){
                return x.second < y.second;
            });
            cout<<it->second<<endl;
        }
        
        
 
 
  
 
 
 
 
        }
 
 
 
 
 
    return 0;
}