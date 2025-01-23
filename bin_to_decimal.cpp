#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int bin;
    cout<<"enter the binary number:";
    cin>>bin;
    int dec=0,num,n=0;
    num=bin;

    while(num!=0){
        int lastDigit=num%10;
        if(lastDigit==1){
            dec=dec+pow(2,n);
        }
        n++;
        num=num/10;    
    }
    cout<<"binary number:"<<bin<<endl;
    cout<<"decimal number:"<<dec<<endl;


    return 0;
}