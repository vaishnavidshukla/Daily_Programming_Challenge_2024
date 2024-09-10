#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int sum1 =0;
    int sum2= (((n+1)*(n+2))/2);
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum1+=arr[i];
    }
    cout<<"Missing element = "<<(sum2-sum1);

    return 0;
}