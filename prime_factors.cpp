#include<iostream>
using namespace std;
int main(){
    int num,f;
    cout<<"enter the number:";
    cin>>num;

    cout<<"all prime factors of given number are:";

    for(int i=2; i<=num; i++){
        if(num%i==0){
            f=1;
            for(int j=2; j<=i/2; j++){
                if(i%j==0){
                    f==0;
                    break;
                }
            }
            if(f==1){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}