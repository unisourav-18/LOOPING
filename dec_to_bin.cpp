#include<bits/stdc++.h>
using namespace std;
int main(){
    long long dec,num,bin;
    int rem,place=1;
    bin=0;

    cout<<"enter the decimal number:";
    cin>>dec;
    num=dec;

    while(num>0){
        rem=num%2;
        bin=(rem*place)+bin;
        num=num/2;
        place=place*10;
    }
    cout<<"decimal number:"<<dec<<endl;
    cout<<"binary number:"<<bin<<endl;
    return 0;
}