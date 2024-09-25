#include <bits/stdc++.h>


using namespace std;


int main(){
    int t;cin>>t;
    
    while(t--){
    int n;int k;cin>>n>>k;
    int len = n;
    vector<int> a(n,1); 
    for(int i =1;i<n;i++)a[i]=2;
    int neg = (((n+1)*n)/2) - k;
    int i =0;
    int h ;
    while(neg!=0){
        h = (2*n-1);
        if(a[i]==1){
            a[i] = -1;
            neg--;
            
        }
        else if(a[i]==2){
            a[i] -= 3;
            neg--;
        }
        else if(a[i]!=-h){
            a[i]-=2;
            neg--;
        }
        else{
            n=n-1;
            i++;
        }

    }
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
    }
    
    return 0;
}