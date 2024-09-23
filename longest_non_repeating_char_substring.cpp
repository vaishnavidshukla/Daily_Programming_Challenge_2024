#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string s = "";
    cout<<"Enter the string";
    getline(cin,s);
    int n = s.size();

    unordered_map <char,int> char_cnt;
    int i,j,count;
    i=j=count=0;

    while(j<n){
        cout<<count<<"\n";
        char_cnt[s[j]]++;

        if(char_cnt[s[j]]==1){
            count = max(count,(j-i+1));
        }
        else{
            while(char_cnt[s[i]]!=char_cnt[s[j]]){
                char_cnt[s[i]]--;
                i++;
            }
            char_cnt[s[i]]--;
            i++;
        }
        j++;
    }

    cout<<count;
    return 0;
}