#include<iostream>
using namespace std;
int main(){ 
    int a[100],n,i,max,min;
    cout<<"enter no=";
    cin>>n;
    for(i=0;i<=n-1;i++){
        cout<<"enter an element=";
        cin>>a[i];
        max=a[0];
        min=a[0];
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    } 
    cout<<"--------------------------------------OUTPUT----------------------------------------------"<<endl;
    cout<<"maximum element="<<max<<endl;
    cout<<"minimum element="<<min<<endl;
    return 0;  
}