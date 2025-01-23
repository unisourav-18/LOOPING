#include<iostream>
using namespace std;
int main(){
    int end,n1=0,n2=1,n3;
    cout<<"enter uppper limit:";
    cin>>end;
    cout<<"fibonacci series:";
    cout<<n1<<" "<<n2;
    for(int i=1; i<=end; i++){
        n3=n1+n2;
        cout<<" "<<n3<<" ";
        n1=n2;
        n2=n3;

    }
    cout<<endl;
    cout<<n3<<endl;
}