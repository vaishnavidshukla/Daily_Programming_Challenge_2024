#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int sum_n = (((n-1)*n)/2);
    int sum_array = 0;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i =0;i<n;i++){
        sum_array += arr[i];
    }

    cout<<"\nDuplicate number is: "<<(sum_array - sum_n);
    
    return 0;
}