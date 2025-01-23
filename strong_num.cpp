#include<iostream>
using namespace std;
int main(){
    int num,sum,n;
    cout<<"enter the number:";
    cin>>num;
    n=num;

    while(n>0){
        int lastDigit=n%10;
        int f=1;
        for(int i=1; i<=n; i++){
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(num=sum){
        cout<<"it is a STRONG number";
    }
    else{
        cout<<"NOT a strong number";
    }

    return 0;

}