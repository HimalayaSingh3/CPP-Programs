#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter value of a=";
    cin>>a;
    cout<<"enter vakue of b=";
    cin>>b;
    cout<<"before swap values"<<endl<<"a="<<a<<endl<<"b="<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<endl<<"after swap values"<<endl<<"a="<<a<<endl<<"b="<<b;
    return 0;
}