#include<iostream>
using namespace std;
int main(){
    int end,sum;
    cout<<"enter upper limit:";
    cin>>end;
    cout<<"perfect numbers from 1 to "<<end<<" are:"<<endl;

    for(int i=1; i<=end; i++){
        sum=0;

        for(int j=1; j<i; j++){
            if(i%j==0){
                sum=sum+j;
            }

        }
        if(i==sum && i>0){
            cout<<i<<" ";
        }

    }
}