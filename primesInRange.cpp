

#include <iostream>
#include<cmath>
using namespace std;

bool primeCheck(int n){
    int flg =0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            flg = 1;
            return false;
        }
    }
    return true;
}

void primesInRange(int n1, int n2){
    cout<<"here are the prime numbers in given range:"<<endl;
    for(int i = n1+1; i< n2; i++){
        if(primeCheck(i)==true){
            cout<<i<<endl;
        }
    }
}


int main(){
    int n1, n2;
    cout<<"enter your range:";
    cin>>n1>>n2;
    primesInRange(n1,n2);
}
