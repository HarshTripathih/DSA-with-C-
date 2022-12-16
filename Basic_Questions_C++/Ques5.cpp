//Check if a given triangle is valid
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    cout<<"Enter the value of c : "<<endl;
    cin>>c;
    
    if(a+b>c){
        cout<<"It is a valid triangle"<<endl;
    }
    else if(b+c>a){
        cout<<"It is a valid triangle"<<endl;
    }
    else if(c+a>b){
        cout<<"It is a valid triangle"<<endl;
    }
    else{
        cout<<"It is not a valid triangle"<<endl;
    }
}