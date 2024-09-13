#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> leaders;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //finding leaders
    int max = -1;
    for(int i=(n-1);i>=0;i--){
        if(arr[i]>max){
            leaders.push_back(arr[i]);
            max = arr[i];
        }
    }

    cout<<"\nLeaders are: ";
    for(int i = (leaders.size()-1);i>=0;i--){
        cout<<leaders[i]<<" ";
    }

    return 0;
}