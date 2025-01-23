#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,n,digits,sum=0;
    cout<<"enter the number:";
    cin>>num;

    n=num;
    digits= (int) log10(num) + 1;

    while (num>0)
    {
        int lastDigit=num%10;
        sum=sum+pow(lastDigit,digits);
        num=num/10;
    }
    if(n==sum){
        cout<<"number is ARMSTRONG!!!";
    }
    else{
        cout<<"NOT armstrong";
    }
}