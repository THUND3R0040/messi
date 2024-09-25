#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int main()
{
    fastio;
    int n;
    cin>>n;
    map<string,int> mp;
    string command,filename;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin >> command;
        if(command=="ask") cout << count << "\n";
        else
        {
            getline(cin,filename);
            if(command=="touch") {
                mp[filename]++;
                if(mp[filename]>1) mp[filename]=1;
                else count++;
            }
            else
            {
                mp[filename]--;
                if(mp[filename]<0) mp[filename]=0;
                else count--;
            }
        }
    }
}