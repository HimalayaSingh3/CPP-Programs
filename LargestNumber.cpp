#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter value of a=";
    cin>>a;
    cout<<"Enter value of b=";
    cin>>b;
    cout<<"Enter value of c=";
    cin>>c;
    if(a>=b && a>=c){
        cout<<"a is largest"<<a;
    }
    else if(b>=a && b>=c){
        cout<<"b is largest"<<b;
    }
    else{
        cout<<"c is largest"<<c;
    }
    return 0;
}