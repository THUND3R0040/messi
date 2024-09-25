#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n; 
    long long rt ;
    long long x;
    map <long long,int> m ;
    vector <long long> v;
    for(int i=0;i<n;i++){
        cin>>x;
        if(m[x]<=1){
            m[x]++;
            v.push_back(x);
            rt++;
        }
    }
    sort(v.begin(),v.end());
    if (v[rt-1]>=v[rt-3] && v[rt-2]>=v[rt-3]){
        if(rt%2==0){
            cout << "WIN\n";
        }
        else{
            cout << "LOSS\n";
        }
    }
    else{
        if(rt%2==0){
            cout << "LOSS\n";
        }
        else{
            cout << "WIN\n";
        }   
    }
    
    






    return  0;
}