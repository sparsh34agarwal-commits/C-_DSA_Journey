#include<iostream>
using namespace std;
int binarysearch(int k, int arr[], int n){
   int s=0,e=n-1;
   int mid=(s+e)/2;
   while(s<=e){
     if(arr[mid]==k)return mid;
     else if(arr[mid]>k){
      e=mid-1;
      mid=(s+e)/2;
     }
     else{s=mid+1;mid=(s+e)/2;}
   }
   return -1;
}
int main(){
    int arr[12]={2,3,4,5,6,7,8,9,14,19,22,29};
    int k=29;
    cout<<binarysearch(k,arr,12);
}