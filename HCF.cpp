#include<iostream>
using namespace std;
int main(){
    int num1,num2,hcf=1;
    cout<<"enter number 1:";
    cin>>num1;
    cout<<"enter number 2:";
    cin>>num2;

    int min=(num1<num2)?num1:num2;
    for(int i=1; i<=min; i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    cout<<"HCF of of given two number is:"<<hcf;
    return 0;


}