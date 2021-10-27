#include<bits/stdc++.h>
using namespace std;
int arr[64][2];
int top = -1;
int main(){
    int t; cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int x;
        if(r != c){
            top++;
            x = (r+c)/2;
            arr[top][0] = x;
            arr[top][1] = x;
            top++;
            arr[top][0] = 1;
            arr[top][1] = 1;
        }
        else{
            x = r;
            if(x != 1){
                top++;
                arr[top][0] = 1;
                arr[top][1] = 1;
            }
        }
        for(int i=2;i<=8;i++){
            top++;
            arr[top][0] = i;
            arr[top][1] = i;
            if(i == 8){
                if(x == 8){
                    cout<<top<<endl;
                }
                else{
                    cout<<top+1<<endl;
                }
                break;
            }

 //           int y = 2*i-1;
 //           if(i>4){
 //               y = 2*(9-i)-1;
 //           }
            for(int j=1;j<8;j++){
                top++;
                arr[top][0] = i+j;
                arr[top][1] = i-j;
                if(i+j == 8 || i-j == 1)
                    break;
            }
            for(int j=1;j<8;j++){
                top++;
                arr[top][0] = i-j;
                arr[top][1] = i+j;
                if(i+j == 8 || i-j == 1)
                    break;
            }
            top++;
            arr[top][0] = i;
            arr[top][1] = i;
        }
        for(int i=0;i<top+1;i++){
            if(i == top && x == 8)
            break;
            cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
        }
        top = -1;
    }
    return 0;
}

