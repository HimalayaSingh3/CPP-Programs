#include<iostream>
using namespace std;
int main(){
    long factorial=1;
    int i,n;
    cout<<"Enter no to find factorial=";
    cin>>n;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<factorial;
    return 0;
}