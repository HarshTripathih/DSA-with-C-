//Check n is prime
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){
    int n,i,count=0;
    bool is_prime = true;

    cout<<"Enter the number : ";
    cin>>n;

    //0 and 1 are not prime numbers
    if(n == 0 || n == 1){
        is_prime = false;
    }
    //loop to check if n is prime
    for(i=2;i<n;i++){
        if(n%i == 0){
            // is_prime = false;
            // cout<<"N is not a prime number ";
            count += 1;

            break;
        }
    }
    if(count == 0){
            cout<<"N is Prime ";
        }
        else{
            cout<<"N is not a prime ";
        }
    // if(is_prime)
    //     cout<< n <<" " << "is a Prime number";
    // else
    //     cout<< n <<" " <<"is not a prime number";
    return 0;
}