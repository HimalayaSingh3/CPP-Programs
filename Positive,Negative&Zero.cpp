#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number=";
    cin>>n;
    if(n>0){
        cout<<n<<" "<<"is positive number"<<endl;
    }
    else if(n<0){
        cout<<n<<" "<<" is negative number"<<endl;
    }
    else{
        cout<<n<<" "<<"is zero"<<endl;
    }
    return 0;
}