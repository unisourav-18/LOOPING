#include<iostream>
using namespace std;
int main(){
    int num,f=0;
    cout<<"enter number:";
    cin>>num;

    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            cout<<"number is NOT prime.";
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"number is prime!!!";
    }
}