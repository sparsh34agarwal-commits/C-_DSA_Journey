#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,4,6};
    vector<int>brr={1,2,3,3,4,5,5,6,7};
    int n=arr.size();
    int m=brr.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]==brr[j]){
            cout<<arr[i]<<" ";
            i++;j++;
        }
        else if(arr[i]>brr[j]){
            j++;
        }
        else{
            i++;
        }
    }
}