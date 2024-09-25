#include <bits/stdc++.h>

using namespace std;
int rec(vector<int>el,int n,map<vector<int>,int> a={}){
    if(n==0){
        return 0;
    }
    if(a.find(el)!=a.end()){
        return a[el];
    }
    
    if(el[0]<=n-1){
        vector <int> el1 (el.begin()+1,el.end());
        vector <int> el2 (el.begin()+el[0]+1,el.end());
        a[el] = min(1+rec(el1,n-1,a),rec(el2,n-el[0]-1,a));
        return min(1+rec(el1,n-1,a),rec(el2,n-el[0]-1,a));
    }
    else{
        vector <int> el1 (el.begin()+1,el.end());
        
        a[el] = 1+rec(el1,n-1,a);
        return 1+rec(el1,n-1,a);
    }
}   


int main(){
    int n;
    int t;
    cin>>t;
    while(t--){
        cin >> n;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }

        cout << rec(a,n) << '\n';
    }
    


    return 0;
}



