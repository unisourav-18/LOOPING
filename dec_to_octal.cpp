#include<bits/stdc++.h>
using namespace std;
int main(){
    int dec,oct=0,place=1,num,rem=0;
    cout<<"enter the decimal number:";
    cin>>dec;
    num=dec;
    while(num>0){
        rem=num%8;
        oct=(rem*place)+oct;
        place=place*10;
        num=num/8;
    }

    cout<<"decimal number:"<<dec<<endl;
    cout<<"octal number:"<<oct<<endl;

    return 0;
}