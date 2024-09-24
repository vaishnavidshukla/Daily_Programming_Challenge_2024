#include<iostream>
#include<math.h>

using namespace std;

long long gcd(long long int n,long long int m){
    if(m==0){
        return n;
    }
    else{
        return (gcd(m,(n%m)));
    }
}

long long lcm(long long int n,long long int m){
    return (n/gcd(n,m))*m;
}

int main(){
    long long int n,m;
    cout<<"Enter the numbers: ";
    cin>>n>>m;

    if(n==1||m==1){
        cout<<(n*m);
        return 0;
    }
    else if(n==m){
        cout<<n;
        return 0;
    }
    else{
        cout<<lcm(n,m);
    }
    return 0;
}