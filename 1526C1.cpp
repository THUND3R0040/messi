#include <bits/stdc++.h>
using namespace std;

int solve(int health, vector<long long>& rt){
    
    if (rt.size() > 1) {
        vector<long long> sub_rt(rt.begin() + 1, rt.end());
        if (rt[0] >= 0) {
            return 1 + solve(health + rt[0], sub_rt);
        } else {
            if(health+rt[0]>=0){
                return max(1+solve(health+rt[0],sub_rt),solve(health,sub_rt));
            }else{
                return solve(health,sub_rt);
            }
        }
    } else {
        // Handle the case where rt.size() is 1
        if (health + rt[0] >= 0) {
            return 1;
        } else {
            return 0;  // If health + rt[0] is not positive, we cannot move forward
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<long long> rt(n);
    for (int i = 0; i < n; i++) {
        cin >> rt[i];
    }

    int health = 0;
    int ans = solve(health, rt);

    cout << ans << endl;

    return 0;
}