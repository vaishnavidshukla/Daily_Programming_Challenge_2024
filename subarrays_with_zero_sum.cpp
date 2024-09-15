#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main(){
    vector <int> a;
    vector <tuple<int,int>>  answer;
    int n ;
    cout<<"Enter the size of array: ";
    cin>>n;
    int num;

    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }
    int start = 0;
    int end = 1;
    int sum =a[0];

    if(n==1){
        if(a[0]==0){
            cout<<"[0]"<<endl;
        }
        else cout<<"[]"<<endl;
        return 0;
    }
    while(start<n||end<n){
        if(a[start] ==0){
            answer.push_back(make_tuple(start,start));
            int i=start+1;
            while(a[i]==0){
                answer.push_back(make_tuple(start,i));
                i++;
            }
            for(int j = start+1;j<i;j++){
                for(int k =j;k<i;k++){
                    answer.push_back(make_tuple(j,k));
                }
            }
            start=i;
            if(end<start) {
                end =start+1;
                continue;
            }
        }
        sum+=a[end];
        if(sum==0){
            answer.push_back(make_tuple(start,end));
            sum-= a[start];
            start++;
            end++;
        }
        else if(sum==a[start]){
            answer.push_back(make_tuple(start+1,end));
            sum-=a[start];
            start++;
            end++;
        }
        else{
            if(end<n) end++;
            else if(start<n) {
                sum-=a[start];
                start++;
            }
        }
        
    }
    cout<<"[";
    for(const auto & tuple: answer){
        cout<<"("<< get<0>(tuple)<<","<<get<1>(tuple)<<"), ";
    }
    return 0;
}
