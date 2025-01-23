#include<iostream>
using namespace std;
int main(){
    int n,num,rev=0;
    cout<<"enter your number:";
    cin>>num;
    num=n;
    while(n!=0){

        rev=(rev*10)+(n%10);
        n=n/10;
    }

    if(rev==num){
        cout<<"number is palindrome!!!";
    }
    else{
        cout<<"number is NOT palindrome";
    }

}