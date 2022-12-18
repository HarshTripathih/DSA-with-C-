#include<iostream>
using namespace std;

int main(){
    int n,r,c;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            char ch = 'A'+r-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}