// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int i,n;
//     bool is_prime=true;
//     cout<<"enter a positive integer:";
//     cin>>n;
//     if (n==0||n==1){
//         is_prime=false;
//     }
//     for (int i = 2; i <= n/2; ++i)
//     {
//         if (n%2==0)
//         {
//             is_prime=false;
//             break;
//         }
        
//     }
//     if (is_prime!=false)
    
//         {
//             cout<<n<<" is a prime number"<<endl;
//         }
//         else{
//             cout<<n<<" is not prime number"<<endl;
//          } return 0;
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=1000;i++){
//       cout<<i<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int sum=0,i;
    for(i=1;i<=10;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}