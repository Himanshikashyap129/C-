#include<iostream>
using namespace std;

    int main(){
        int h,a,b;
        cout<<"enter two numbers:";
        cin>>a>>b;
        for(h=a<b?a:b; h>=1; h--){
            if(a%h==0 && b%h==0)
            break;
        }
        cout<<"HCF is:"<<h<<endl;
        return 0;

    }

   
