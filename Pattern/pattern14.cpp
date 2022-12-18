#include<iostream>
using namespace std;

int main(){
    int n,r,c;
    int count = 0;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            char ch = 'A'+count;
            cout<<ch<<" ";
            count++;
        }
        cout<<endl;
    }
}