#include<iostream>
using namespace std;
int main(){
       int num;
       cout<<"Enter a number: ";
       cin>>num;
       int count=0;
       while(num>0){
         num=num/10;
         count++;
       }
       cout<<"no. of digits in the number are: "<<count<<endl;
}