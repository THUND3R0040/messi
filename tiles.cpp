#include <bits/stdc++.h>


using namespace std;


int main(){
    int w,h;
    cin>>w>>h;
    long long int ans = 1;
    for (int i=0;i<w+h;i++){
        ans = ans*2;
        ans = ans %998244353;
    }
    cout <<ans<<'\n';



    return 0;
}