#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    int n;cin>>n;
    int array [n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }

    
    
    int sumcol[n]={0};
    int sumrow[n]={0};
    
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            sumcol[j]+=array[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sumrow[i]+=array[i][j];
        }
    }



    int s=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sumcol[j]>sumrow[i]){
                s++;
            }
        }
        
    }
    cout << s;


}