#include<iostream>
#include<math.h>

using namespace std;

int main(){
    long int n;
     cout<<"Enter the number: ";
     cin>>n;
     int total_divisors =0;
     for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            total_divisors++;
       }
        if(n/i!=i){
            total_divisors++;
        }
        
     }
     if(n%2!=0){
        for(int i=3;i<=sqrt(n);i++){
            while(n%i==0){
                n=n/i;
            }
        }
        if(n>2){
            total_divisors=2;
        }

     }
     cout<<total_divisors;
    return 0;
}