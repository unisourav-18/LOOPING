#include<iostream>
#define SIZE 8
using namespace std;
int main(){
    char bin[SIZE+1], onesComp[SIZE+1];
    int f=0;
    cout<<"enter the 8 bit binary value:";
    gets(bin);

    for(int i=0; i<SIZE; i++){
        if(bin[i]=='1'){
            onesComp[i]='0';
        }
        else if(bin[i]=='0'){
            onesComp[i]='1';
        }
        else{
            cout<<"invalid input";
            f=1;
            break;
        }
    }
    onesComp[SIZE]='\0';

    if(f==0){
        cout<<"original binary value:"<<bin<<endl;
        cout<<"Ones complement:"<<onesComp<<endl;
    }

    return 0;
}