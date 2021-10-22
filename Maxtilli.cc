#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx = -19999999; //assigning a smallest value

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }

    return 0;
}