#include <bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        bool test=false;
        cin >> a >> b;
        for (int i=0;i<a.size();i++){
            if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1'){
                test = true;
                break;
            }
        }
       if(test) cout << "YES\n" ;
       else cout << "NO\n" ;
        
    }
    return 0;
}