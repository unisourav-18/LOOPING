#include<bits/stdc++.h>
using namespace std;

void pat(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i-j <= 0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
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
