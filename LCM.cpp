#include<iostream>
using namespace std;
int main(){
    int num1,num2,lcm=1;
    cout<<"enter two numbers to find lcm:";
    cin>>num1;
    cin>>num2;
    int max=(num1>num2)?num1:num2;
    int i=max;

    while(1){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
        i=i+max;
    }
    cout<<"LCM of given numbers is:"<<lcm;

    return 0;

}