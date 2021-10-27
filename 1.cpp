#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n,k,sum = 0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>k)
            sum += arr[i] - k;
        }
        cout<<sum<<endl;
    }

    return 0;
}

