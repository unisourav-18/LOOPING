#include<iostream>
using namespace std;
int main(){
    long long n=0, num;
    cout<<"enter the number:";
    cin>>num;

    while(num!=0){
        n=(n*10)+(num%10);
        num=num/10;
    }

    while(n!=0){
        switch(n%10){
            case 0:
                cout<<"zero ";
                break;
            case 1:
                cout<<"one ";
                break;
            case 2:
                cout<<"two ";
                break;
            case 3:
                cout<<"three ";
                break;
            case 4:
                cout<<"four ";
                break;
            case 5:
                cout<<"five ";
                break;
            case 6:
                cout<<"six ";
                break;
            case 7:
                cout<<"seven ";
                break;
            case 8:
                cout<<"eight ";
                break;
            case 9:
                cout<<"nine ";
                break;
        }
        n=n/10;
    }
    return 0;
}