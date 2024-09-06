//write a program to convert temperature in celsius to fahrenheit.
#include<iostream>
using namespace std;
int main(){
    int f,c;
    cout<<"enter temperature in celsius=";
    cin>>c;
    cout<<"temperature in celsius="<<c<<endl;
    f=(1.8*c)+32;
    cout<<"temperature in fahrenheit="<<f<<endl;
    return 0;

}