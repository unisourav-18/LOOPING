#include<bits/stdc++.h>
using namespace std;
int main(){
    long long oct, num, dec;
    int place, rem;
    cout<<"enter the octal number:";
    cin>>oct;
    num=oct;
    dec=0;
    place=0;

    while(num>0){
        rem=num%10;
        dec=dec+pow(8,place)*rem;
        num=num/10;
        place++;
    }
    cout<<"octal number:"<<oct<<endl;
    cout<<"decimal number:"<<dec<<endl;

    return 0;

}