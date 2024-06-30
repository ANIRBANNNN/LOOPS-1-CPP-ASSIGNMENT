#include<iostream>
using namespace std;
int main(){
    cout<<"Print all ASCII values";
    int y=0;
    while((y>=0)&&(y<=126)){
        //cout<<y;
        cout<<(char)y<<"="<<y<<endl;
        y+=1;
    }
}