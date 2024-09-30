#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int first_occurence(vector <int> vec,int k){
    unordered_map <int,int> map;
    for(int a: vec){
        map[a]++;
        if(map[a]==k){
            return a;
        }
    }
    return (-1);
}

int main(){
    vector <int> vec;
    int n,a,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    cout<<"Enter the number of occurence: ";
    cin>>k;
    a = first_occurence(vec,k);
    cout<<a;
    return 0;
}