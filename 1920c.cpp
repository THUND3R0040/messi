#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n ;cin>>n;
        vector <int> a(n);
        vector <int> k;
        for (int i =1;i<(int)sqrt(n)+1;i++){
            if(n%i==0){
                k.push_back(i);
            }
        }
        k.push_back(n);
        for (int i =0;i<n;i++){
            cin>>a[i];
        }

        for (int i=0;i<k.size();i++){
            for(int j=0;j<n;j++){
                if(j%k[i]==0){
                    
                }
            }
            
        }



    }

    return 0;
}