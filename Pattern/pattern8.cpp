#include<iostream>
using namespace std;

int main(){
    int n,i,j,count=1;
    cout<<"Enter the value of n \n";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}