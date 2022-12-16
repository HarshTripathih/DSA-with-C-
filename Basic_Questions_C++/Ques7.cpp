// //Print Even numbers b/w N ?
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     for(int i=2;i<n;i=i+2){
//         if(n%2==0){
//             cout<<i;
//         }
//         else{
//             cout<<i;
//         }
//     }
// }

// for odd
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<n;i=i+2){
        if(n%2!=0){
            cout<<i;
        }
        else{
            cout<<i;
        }
    }
}