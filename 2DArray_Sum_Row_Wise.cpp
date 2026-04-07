#include<bits/c++io.h>
#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
int sum;
int ans=INTMAX_MIN;
    for(int i=0;i<4;i++){
        sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum;
        if(sum>ans)ans=sum;
        cout<<endl;
    }
    cout<<ans;
}