#include <iostream>    
using namespace std;    
class Cal {    
    public:  
    void func(){
        cout<<"Empty"<<endl;
    }  
    void func(int a,int b){
             
       cout<<a+b<<endl;     
    }      
    void func(int a,int b,int c){     
        
        cout<<a+b+c<<endl;     
    }      
};     
int main(void) {    
    Cal C; 
    C.func();                                                     
    C.func(10,5);
    C.func(15,30);   
   return 0;    
} 