#include<iostream>
using namespace std;
int main(){

    int l,w,area,perimeter;

    cout<<"Enter length of rectangle=";
    cin>>l;

    cout<<"Enter width of rectangle=";
    cin>>w;

    area = l * w;
    cout<<"Area of Rectangle is"<<area<<endl;

    perimeter = (l + w) * 2;
    cout<<"Perimeter of Rectangle is"<<perimeter<<endl;
    
    return 0;
}