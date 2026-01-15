#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Please enter your calculation"<<endl;
    cin>>a>>op>>b;
    switch(op){
        case '+':cout<<"Answer - "<<(a+b)<<endl;
            break;
        case '-':cout<<"Answer - "<<(a-b)<<endl;
            break;
        case '*':cout<<"Answer - "<<(a*b)<<endl;
            break;
        case '/':cout<<"Answer - "<<(a/b)<<endl;
            break;
        case '%':cout<<"Answer - "<<(a%b)<<endl;
            break;
        default:cout<<"Please enter a valid operator"<<endl;
    }
}