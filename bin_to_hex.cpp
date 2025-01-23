#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int hexConnstant[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
    long long bin,num;
    cout<<"enter the binary number:";
    cin>>bin;
    char hex[20];
    int index=0;

    num=bin;

    while(num!=0){
        int digit=num%10000;

        for(int i=0; i<16; i++){
            if(hexConnstant[i]==digit){
                if(i<10){
                    hex[index]=(char)(i+48);
                }
                else{
                    hex[index]=(char)((i-10)+65);
                }
                index++;
                break;
            }
        }
        num=num/10000;
    }
    hex[index]='\0';
    strrev(hex);

    cout<<"binary number:"<<bin<<endl;
    cout<<"hexadecimal number:"<<hex<<endl;

    return 0;
    
}