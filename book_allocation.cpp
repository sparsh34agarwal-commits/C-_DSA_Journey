#include<bits/stdc++.h>
using namespace std;

bool isvalid(vector<int>& arr,int n,int m,int mid){
    int sum=0,count=1;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            count++;
            sum=arr[i];
            if(count>m)return false;
        }
    }
    return true;
}

int allocatebooks(vector<int>& arr,int n,int m){
    int s=*max_element(arr.begin(),arr.end()), e=accumulate(arr.begin(),arr.end(),0);
    int mid = s + (e-s)/2,ans=-1;
    while(e>=s){
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
vector<int> arr = {5,40,20,50,30,25,70};
int n =7,m=3;
    cout<<allocatebooks(arr,n,m);
}