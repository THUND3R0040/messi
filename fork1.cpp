#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t,a,b,xk,yk,xn,yn,xq,yq,rt;
    cin >> t;
    while(t--){
        rt=0;
        cin >>a>>b>>xk>>yk>>xq>>yq;
        vector <long long int> ab = {a,b,a,-b,-a,b,-a,-b};
        if(a==b){
            for(int i =0;i<4;i++){
            xn=xk+ab[i];
            yn = yk + ab[i];
            for(int j=0;j<4;j++){
                if(xn+ab[j]==xq && yn+ab[j]==yq){
                    rt++;
                    
                }
            }
        }
        }
        else{

            for(int i =0;i<4;i++){
            xn=xk+ab[i];
            yn = yk + ab[i];
            for(int j=0;j<4;j++){
                
                if(xn+ab[j]==xq && yn+ab[j]==yq){
                    rt++;
                    
                }
            }
        }
        
        for(int i =0;i<4;i++){

            xn=xk+ab[i;
            yn = yk + ab[i];
            for(int j=0;j<4;j++){
                
                if(xn+ab[j]==xq && yn+ab[j]==yq){
                    rt++;
                    
                }
            }
        }
        }
        
        cout << rt<<endl;
        
        
        
    }
    
    return 0;
}