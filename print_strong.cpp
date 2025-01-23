#include<iostream>
using namespace std;
int main(){
    int end,sum;
    cout<<"enter the upper limit:";
    cin>>end;
    cout<<"Strong numbers from 1 to "<<end<<" are:";
    for(int i=1; i<=end; i++){
        sum=0;
        int cur=i;

        while(cur>0){
            int lastDigit=cur%10;
            int f=1;
            for(int j=1; j<=lastDigit; j++){
                f=f*j;
            }
            sum=sum+f;
            cur=cur/10;
        }
        if(i==sum){
            cout<<i<<" ";
        }
    }
    return 0;

}