#include <bits/stdc++.h>


using namespace std;


int main() {
    long long n,d;
    cin >> n >> d;

    vector <int > a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    int s=0;
    int i=0;
    do{
        s+=a[i];
        i++;
    }while(s<=d && i<n);

    
    cout << i;
    return 0;
}