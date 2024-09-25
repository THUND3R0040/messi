#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
using namespace std;



int rt [200009]={0};
int frogStep[200009]={0};


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        
        int n;cin>>n;
        int len=0;
        int maxi =0;

        for(int i =0;i<n;i++){
            int x;cin>>x;
            
            if(x<=n){
                frogStep[len]=x;
                len++;
                rt[x]++;
                maxi = max(maxi,rt[x]);
            }   
        }

        

        
        

        
        
        
        int mult;
        
        
        for(int i =0;i<len;i++){
            mult = frogStep[i];
            while(mult<=n){
                mult += frogStep[i];
                if(mult<=n){
                    rt[mult]++;
                    maxi = max(maxi,rt[mult]);
                }
            }
            
        }
    
        
    
        

        cout << maxi <<'\n';
        memset(frogStep, 0, sizeof(frogStep));
        memset(rt, 0, sizeof(rt));
    }
    

    
    return 0;
}