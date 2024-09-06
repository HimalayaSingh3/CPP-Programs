//write a program to convert temperature in celsius to fahrenheit.
#include<iostream>
using namespace std;
int main(){
    int f,c;
    cout<<"enter temperature in Fahrenheit=";
    cin>>f;
    cout<<"temperature in Fahrenheit="<<f<<endl;
    c=(f-32)*5/9;
    cout<<"temperature in Celsius="<<c<<endl;
    return 0;

}