#include <bits/stdc++.h>
using namespace std;
int main(){
    string us = "abcdefgh";
    int n ;
    cin >> n;
    string s;
    string ch;

while(n--){
    cin >> s;
    char x = s[0];
    char y = s[1];
    for(int i =0;i<8;i++){
        if(us[i]==x){
            continue;
        }
        cout << us[i]<<y<<endl;
    }
    for(int i=1;i<=8;i++){
        if(i==y-'0'){
            continue;
        }
        cout << x <<i<<endl;
    }
            
    } 
        

    
    
   
        

    return 0;
}