#include<iostream>
using namespace std;

int main(){
    int n,r,c;

    cout<<"enter the value of n"<<endl;
    cin>>n;

    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            cout<<r-c+1<<" ";
        }
        cout<<endl;
    }
}