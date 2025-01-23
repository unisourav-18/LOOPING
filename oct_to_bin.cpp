#include<iostream>
using namespace std;
int main(){
    int octValues[]={0,1,10,11,100,101,10,111};
    int rem;
    long long oct,num,bin,place;
    cout<<"enter the octal number:";
    cin>>oct;
    num=oct;
    bin=0;
    place=1;

    while(num>0){
        rem=num%10;
        bin=(octValues[rem]*place)+bin;
        num=num/10;
        place=place*1000;
    }
    cout<<"octal number:"<<oct<<endl;
    cout<<"binary number:"<<bin<<endl;

    return 0;

}