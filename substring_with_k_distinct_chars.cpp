#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string s = "";
    cout<<"Enter the string: ";
    getline(cin,s);

    int k;
    cout<<"Enter the number of distinct characters";
    cin>>k;

    int n = s.size();
    unordered_map <char,int> char_cnt;
    int i,j,count;
    count=0;

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            char_cnt[s[j]]++;
            if(char_cnt.size()==k){
                count++;
            }
        }
        char_cnt.clear();
    }
    
    cout<<count;
    return 0;
}