#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"enter your number:";
    cin>>n;

    while(n!=0){
        n=n/10;
        c++;
    }

    cout<<"no of digits:"<<c<<endl;

    return 0;
}