// #include<iostream>
// using namespace std;
// class hello{
//     public:
//     int a,b;
// hello(int x,int y){
// a=x;
// b=y;
// }
// hello(hello &d){
//     a=d.a;
//     b=d.b;
// }


// };
// int main(){
//     hello obj(3,6);
//     hello obj2(obj);
//     cout<<obj2.a<<" "<<obj2.b<<endl;
//     return 0;
//}
#include<iostream>
using namespace std;
class code{
    int id;
    public:
    code(){ }
    code(int a){ id=a; }
    code(code & x){
        id= x.id;
    }
    void display(void){
        cout<<id;
    }
};
int main(){
    code A(100);
    code B(A);
    code C=A;
    code D;
    D=A;
    cout<<"id of A:"; A.display();
    cout<<endl;
    cout<<"id of B:"; B.display();
    cout<<endl;
    cout<<"id of C:"; C.display();
    cout<<endl;
    cout<<"id of D:"; D.display();
    cout<<endl;
    return 0;

}