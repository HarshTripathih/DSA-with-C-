//Is N is positive ,Negative or 0
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    if(n>0){
        cout<<"N is Positive"<<endl;
    }
    else if(n<0){
        cout<<"N is Negative"<<endl;
    }
    else{
        cout<<"N is Zero"<<endl;
    }
}