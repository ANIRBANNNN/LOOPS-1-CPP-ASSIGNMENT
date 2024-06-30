#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Display GP upto n terms";
    cin>>n;
    int a=3;
    int i;
    for(i=0;i<n;i++){
        //a=a+3;
        cout<<a<<endl;
        a=a*4;
    }
}