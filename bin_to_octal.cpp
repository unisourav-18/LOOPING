#include<iostream>
using namespace std;
int main(){
    int octalConstant[]={0,1,10,11,100,101,110,111};
    int bin;
    cout<<"enter the binary number:";
    cin>>bin;
    int oct=0,num,place=1;
    num=bin;

    while(num!=0){
        int digit=num%1000;

        for(int i=0; i<8; i++){
            if(octalConstant[i]==digit){
                oct=(i*place)+oct;
                break;
            }
        }
        num=num/1000;
        place=place*10;
    }
    cout<<"original binary number:"<<bin<<endl;
    cout<<"octal number:"<<oct<<endl;
}