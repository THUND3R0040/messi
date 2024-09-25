#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector <int> rt;
        int val=0;
        string s;cin>>s;
            if(s[0]=='B' || s[s.length()-1]=='B'){
                cout << count(s.begin(),s.end(),'A')<<endl;
            }
            else{
                vector <int> rt;
                for(int i =1;i<s.length()-1;i++){
                    if(s[i]=='B' && s[i+1] == 'B'){
                        val += count(s.begin(),s.begin()+i,'A');
                        i++;
                    }
                    else{
                        rt.push_back()
                    }
                }
                cout << val<<endl;
            }
        
            
        }
       

    
    return 0;    
}