#include<iostream>
#include<array>
using namespace std;
void swap(int& a,int& b);
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    if(n==0){
        cout<<"[]";
        return 0;
    }

    cout<<"Enter the elements:";
    for(int i =0;i<n;i++){
        cin>>arr[i];

    }
    

    int low=0;
    int mid =0;
    int high = (n-1);
    while(mid<high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]); 
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid] ==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    if(arr[mid]<arr[mid-1]){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]); 
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
    }
    
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}
void swap(int& a,int& b){
    a= a+b;
    b=a-b;
    a=a-b;
}