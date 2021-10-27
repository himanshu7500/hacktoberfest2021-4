#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int f[n];
        int p[n];
        for(int i=0;i<n;i++)
            cin>>f[i];
        for(int i=0;i<n;i++)
            cin>>p[i];
        int HashArray[m+1];
        for(int i=0;i<m+1;i++)
            HashArray[i] = -1;
        for(int i=0;i<n;i++){
            if(HashArray[f[i]] == -1)
            HashArray[f[i]] = 0;
            HashArray[f[i]] += p[i];
        }
        int minprice = 10000;
        for(int i=0;i<m+1;i++){
            if(HashArray[i]<minprice && HashArray[i] != -1){
                minprice = HashArray[i];
            }
        }
        if(minprice == 10000)
            minprice = 0;
        cout<<minprice<<endl;
    }
    return 0;
}
