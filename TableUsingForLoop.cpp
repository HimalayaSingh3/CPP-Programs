#include<iostream>
using namespace std;
int main(){
    int i,table;
    cout<<"enter no to print table=";
    cin>>table;
    for(i=1;i<=10;i++){
        table*i;
        cout<<table<<"*"<<i<<"="<<table*i<<endl;
    }
    return 0;
}