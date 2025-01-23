#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"enter the number:";
    cin>>n;
     while(n!=0){

        rev=(rev*10)+(n%10);
        n=n/10;
    }
    cout<<"reversed number is:"<<rev;
}
