#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //input
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //make odd number negative
int i=0;
    while(i<n){
        if(arr[i]%2!=0){
            arr[i]=-arr[i];
        }
        i++;
    }
    sort(arr.begin(),arr.end()); //after sorting we will get required result

    // after sorting again make them positive
int j=0;
    while(j<n){
        if(arr[j]%2!=0){
            arr[j]=(-1)*(arr[j]);
        }
        j++;
    }

    //print
int k=0;
    while(k<n){
        cout<<arr[k]<<" ";
        k++;
    }

}   