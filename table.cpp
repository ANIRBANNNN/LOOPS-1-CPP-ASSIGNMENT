#include<iostream>
using namespace std;
int main(){
    int n,range;
    cout<<"Enter table of:"<<endl;
    cin>>n;
    cout<<"Enter the range upto which table continues:"<<endl;
    cin>>range;
    int i;
    int result;
    for(i=1;i<=range;i++){
        result=n*i;
        cout<<result<<"="<<n<<"*"<<i<<endl;
    }
}