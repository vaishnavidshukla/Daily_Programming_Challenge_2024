#include<iostream>
using namespace std;

void print_arrays(int n1,int n2,int arr1[],int arr2[]){
    cout<<"\narr1 = ";
    for(int i =0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\narr2 = ";
    for(int i =0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
}

int main(){
    int n1;
    cout<<"Enter the size of first array: ";
    cin>>n1;

    int arr1[n1];
    cout<<"Enter the elements of first array";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    int n2;
    cout<<"Enter the size of second array: ";
    cin>>n2;

    int arr2[n2];
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    //if arrays are already sorted
    if(arr1[n1-1]<arr2[0]){
        print_arrays(n1,n2,arr1,arr2);
        return 0;
    }

    //if arrays are not sorted
    //merge first array
    for(int i =0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[j]>arr2[i]){
                swap(arr1[j],arr2[i]);
            }
        }
    } 

    //sort second array
    for(int i=0;i<n2;i++){
        int j=i;
        while(j>0&&arr2[j-1]>arr2[j]){
            swap(arr2[j-1],arr2[j]);
            j--;
        }
    }

    print_arrays(n1,n2,arr1,arr2);

    return 0;
}