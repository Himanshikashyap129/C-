// #include<iostream>
// #include<string>
// using namespace std;
// class binary{
//     string s;
//     public:
//     void red(void){
//         cout<<"my nsme is himanshi kashyap"<<endl;
//     }
//     void blue(void){
//         cout<<"it's me"<<endl;
//     }

// };
// int main()          //nesting of member function//
// { binary me;
// me.red();
// me.blue();
// return 0;
// }
#include<iostream>
using namespace std;
class abc{
    public:
    void set(){
     int a,b,sum;
     cout<<"enter the value of a and b:";
     cin>>a>>b;
     sum=a+b;
     cout<<sum<<endl;
    
    }
};
int main(){
    abc obj;
    obj.set();
     return 0;
}
