#include<iostream>
using namespace std;
int main(){
    int i,table;
    cout<<"enter no to print table=";
    cin>>table;
    i=1;
    while(i<=10){
        table*i;
        cout<<table<<"*"<<i<<"="<<table*i<<endl;
        i=i+1;
    }
    return 0;
}