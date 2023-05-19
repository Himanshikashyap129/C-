// #include<iostream>
// using namespace std;

//     int main(){
//         int h,a,b;
//         cout<<"enter two numbers:";
//         cin>>a>>b;
//         for(h=a<b?a:b; h>=1; h--){
//             if(a%h==0 && b%h==0)
//             break;
//         }
//         cout<<"HCF is:"<<h<<endl;
//         return 0;

//     }
#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int i,j;
    cout<<"enter the elements of an array=";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
           
        }
        cout<<endl;
    }
    cout<<"The matrix is="<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
       cout<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The transpose of a matrix="<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[j][i];
            cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
   
