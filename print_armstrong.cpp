#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,n,digits,sum,end;
    cout<<"enter upper limit:";
    cin>>end;

    cout<<"Armstrong numbers between 1 to"<<end<<"are:"<<endl;
    for(int i=1; i<=end; i++){
        num=i;
        sum=0;
        digits= (int) log10(num) + 1;

        while (num>0){
            int lastDigit=num%10;
            sum=sum+ceil(pow(lastDigit,digits));
            num=num/10;
        }
        if(i==sum){
            cout<<i<<" ";
        }
    }
    return 0;

}