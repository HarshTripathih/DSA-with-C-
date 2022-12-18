#include<iostream>
using namespace std;

int main(){
    int n,r,c,count=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

   for(r=1;r<=n;r++){
    for(c=1;c<r;c++){
        char ch = 'A'+count;
        cout<<ch<<" ";
        count=count+1;

    }
    cout<<endl;
   }
}