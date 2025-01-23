#include<iostream>
using namespace std;
int main(){
    int n,p=1;
    cout<<"enter your number:";
    cin>>n;
    while(n>0){
        p=p*(n%10);
        n=n/10;
    }
    cout<<"product of its digits:"<<p<<endl;
 

}