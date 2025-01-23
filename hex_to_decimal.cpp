#include<bits/stdc++.h>
using namespace std;
int main(){
    char hex[17];
    long long dec,place;
    int i=0,val,len;

    dec=0;
    place=1;
    cout<<"enter hexadecimal number:";
    gets(hex);

    len=strlen(hex);
    len--;

    for(i=0; hex[i]!='\0'; i++)
    {
 
        /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        dec += val * pow(16, len);
        len--;
    }

    cout<<"Hexadecimal number:"<<hex<<endl;
    cout<<"Decimal number:"<<dec<<endl;

    return 0;
}
    

