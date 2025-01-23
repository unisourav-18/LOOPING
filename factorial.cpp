#include<iostream>
using namespace std;
int main(){
    int num,f=1;
    cout<<"enter the number whose factorial is to be calculated:";
    cin>>num;

    for(int i=1; i<=num; i++){
        f=f*i;

    }
    cout<<"factorial of given number is:"<<f;
}