#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number whose factors are to be calculated:";
    cin>>num;
    cout<<"all factors of given number are:";
    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
        }

    }
}