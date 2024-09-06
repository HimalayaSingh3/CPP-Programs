#include<iostream>
using namespace std;
int main(){
float height,weight,meters,sqr,BMI;
//input height and weight
cout<<"Enter height in cm=";
cin>>height;
cout<<"Enter weight in kg=";
cin>>weight;
//formula to find bmi
meters=height/100;
sqr=meters*meters;
BMI=weight/sqr;
cout<<"BMI="<<BMI<<endl;
//bmi status
if(BMI<18.5){
    cout<<"Underweight";
}
else if(BMI>=18.5 && BMI<24.9){
    cout<<"Healthy";
}
else if(BMI>=24.9 && BMI<30){
    cout<<"Overweight";
}
else if(BMI>=30){
    cout<<"Suffering from obesity";
}
return 0;
}