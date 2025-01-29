#include<bits/stdc++.h>
using namespace std;

void pat(int n){
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    pat(n);
}

output:

enter n:7
*******
******
*****
****
***
**
*


=== Code Execution Successful ===
