#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    long int n;
    cout<<"Enter the number: ";
    cin>>n;
    long int pr_num;
    vector<long int> factors;
    {
        if(n%2==0){
            pr_num =2;
            while(n%pr_num==0&&n>1){
                factors.push_back(pr_num);
                n=n/pr_num;
            }
        }

        for(pr_num=3;pr_num<=sqrt(n);pr_num=pr_num+2){
            while(n%pr_num==0){
                factors.push_back(pr_num);
                n= n/pr_num;
            }
        } 

        if(n>2){
            factors.push_back(n);
        }   
    }
    cout<<"[";
    for(int i =0;i<factors.size();i++){
        cout<<factors[i]<<" ";
    }
    cout<<"]";
    return 0;
}