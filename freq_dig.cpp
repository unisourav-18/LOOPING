#include<iostream>
using namespace std;
int main(){
    long long num, n;
    cout<<"enter the number:";
    cin>>num;
    int arr[10];
    
    for(int i=0; i<10; i++){
        arr[i]=0;
    }
    n=num;

    while(n!=0){

        int lastDigit=n%10;
        n=n/10;

        arr[lastDigit]++;

    }

    cout<<"frequency of each digit in"<<num<<"is:"<<endl;
    for (int i = 0; i < 10; i++){
        cout<<"frequency of "<<i<<" is: "<<arr[i]<<endl;
    }
    return 0;
}