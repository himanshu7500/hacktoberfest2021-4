//maximum subarray sum.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxSum= INT_MIN;
    for(int i=0;i<n;i++){
        int current = 0;
        for(int j=i;j<n;j++){
            current+=a[j];
            //cout<<current<<endl;
        }
        maxSum = max(maxSum,current);
    }
    cout<<maxSum<<endl;
    return 0;           //Sum of all subarrays
}