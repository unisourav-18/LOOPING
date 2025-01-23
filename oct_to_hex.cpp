#include<bits/stdc++.h>
using namespace std;
int main(){
    int octValues[]={0,1,10,11,100,101,10,111};
    long long oct,bin,num,place;
    char hex[65]="";
    int rem;
    place=1;
    bin=0;
    cout<<"enter the octal number:";
    cin>>oct;
    num=oct;

    while(num>0){
        rem=num%10;
        bin=(octValues[rem]*place)+bin;
        num=num/10;
        place=place*1000;
    }

    while(bin > 0)
    {
        rem = bin % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        bin /= 10000;
    }

    strrev(hex);

    cout<<"octal number:"<<oct<<endl;
    cout<<"hexadecimal number:"<<hex<<endl;

    return 0;

}