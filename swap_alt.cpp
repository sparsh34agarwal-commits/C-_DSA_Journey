#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,8,3,8,4,9,3};
    for(int i=1;i<7;i+=2){
        swap(arr[i-1],arr[i]);
    }
    for(int j=0;j<7;j++){
        cout<<arr[j]<<" ";
    }
}