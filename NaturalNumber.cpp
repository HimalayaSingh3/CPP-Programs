#include<iostream>
using namespace std;
int main(){
    int N,i,sum=0;
    cout<<"Enter the value of N=";
    cin>>N;
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}