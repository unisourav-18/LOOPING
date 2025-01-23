#include<iostream>
using namespace std;
int main(){
    int num,sum=0,n;
    cout<<"enter the number:";
    cin>>num;
    n=num;

    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==n && n>0){
        cout<<"number is PERFECT";
    }
    else{
        cout<<"not perfect";
    }

}