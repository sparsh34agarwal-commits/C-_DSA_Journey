#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    int arr[7]={1,2,2,3,4,5,6};
    int a=0;
    for(int i=0;i<7;i++){
        a=(a^arr[i]);
    }
    for(int k=1;k<=6;k++){
        a=a^k;
    }
    cout<<a;
}