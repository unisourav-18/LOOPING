#include<iostream>
using namespace std;
int main(){
    int base,expo,pow=1;
    cout<<"enter base:";
    cin>>base;
    cout<<"enter exponent:";
    cin>>expo;
    
    for(int i=1; i<=expo; i++){
        pow=pow*base;
    }
    cout<<"calculated power of given number is:"<<pow;
    
}