#include <bits/stdc++.h>

using namespace std;

#define maxi 100009

int main(){
    long long count[maxi];
    long long dp[maxi];
    long long n;
    cin >> n;
    memset(count, 0, sizeof(count));
    memset(dp, 0, sizeof(dp));
    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        count[x]++;
    }
    dp[0] = 0;
    dp[1] = count[1];
    for(long long i = 2; i < maxi; i++){
        dp[i] = max(dp[i-1], dp[i-2] + count[i]*i);
    }
    cout << dp[maxi - 1];



    return 0;
}