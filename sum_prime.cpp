#include<iostream>
using namespace std;
int main(){
    int n,f,sum=0;
    cout<<"enter number upto which prime numbers you want to display:";
    cin>>n;
    
    cout<<"prime numbers between i to n are:";
    for(int i=2; i<=n; i++){
        f=1;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                f=0;
                break;
            }
        }
        if(f==1){
            sum=sum+i;
        }
    }
    cout<<"sum of prime numbers are:"<<sum;
    
    return 0;
}