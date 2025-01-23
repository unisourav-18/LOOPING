#include<bits/stdc++.h>
using namespace std;
int main(){
    char hexValue[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    long long dec,num;
    cout<<"enter the decimal number:";
    cin>>dec;
    int rem,index=0;
    char hex[65];
    num=dec;

    while(num!=0){
        rem=num%16;
        hex[index]=hexValue[rem];
        num=num/16;
        index++;
    }
    hex[index]='\0';

    strrev(hex);

    cout<<"decimal number:"<<dec<<endl;
    cout<<"hexadecimal number:"<<hex<<endl;

    return 0;
}