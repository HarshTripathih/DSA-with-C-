#include<iostream>
using namespace std;

int main(){
    // //array declaration by specifying Size
    // int arr1[10];
    // //declare an array of user specified size
    // int n=10;
    // int arr2[n];
    // //Array declaration by initializing elements
    // int arr[]={10,20,30,40,50};
    // //Array declaration by specifying size and initializing elements
    // int arr[6]={1,2,3,4,5,6};
    // cout<<arr[3];

    int n=5; 
    int arr[n],s,p;
    cout<<"Enter the  array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


    return 0;
}