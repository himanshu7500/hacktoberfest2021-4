#include<bits/stdc++.h>
using namespace std;
int bitnum(int n)
{
    int count = 0;
    while(n){
        n &= (n - 1);
        count++;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n];
        int p[q];
        int flag = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>p[i];
        }
        bool x,y;
        for(int i=0;i<n;i++){
            x = bitnum(a[i])%2;
            if(x)
                flag++;
        }
        for(int i=0;i<q;i++){
            y = bitnum(p[i])%2;
            if(y){
                cout<<flag<<" "<<n-flag<<endl;
            }
            else{
                cout<<n-flag<<" "<<flag<<endl;
            }
        }
    }
    return 0;
}

