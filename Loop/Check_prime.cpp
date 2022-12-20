#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the no you wnt to check : ";
    cin>>n;

    bool isprime =1;
    for(i=2; i<n; i++){
        if(n%i == 0){
            isprime = 0;
            break;
        }
    }
    if(isprime == 0){
        cout<<n<<" "<<"Is not a Prime number"<<endl;
    }
    else{
        cout<<n<<" "<<"Is a Prime number"<<endl;
    }
}