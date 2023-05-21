#include<iostream>
using namespace std;
int main(){
 int n,r,sum=0,temp;
 cout<<"enter the number=";
 cin>>n;
 temp=n;
 while(n>0){
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
 }
 if(temp==sum){
    cout<<"Entered number is armstrong number"<<endl;
 }
 else{
    cout<<"entered number is not armstrong number"<<endl;
 }
 return 0;
}