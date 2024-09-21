#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "";

    cout<<"Enter the string: ";
    getline(cin,s);
    
    int n = s.length();
    int is_pal[n][n];
    int start = 0;
    int end=0;
    int len =1;

    for(int i =0;i<n;i++){
        is_pal[i][i] =1;
    }
    for(int i =0;i<n-1;i++){
        if(s[i]==s[i+1]){
            is_pal[i][i+1]=1;
            if(len<2){
            start = i;
            end=i+1;
            len=2;
            }
        }
        else{
            is_pal[i][i+1]=0;
        }
    }

    if(n>=3){
        for(int i =0;i<=(n-3);i++){
            for(int j =2;j<n;j++){
                if((s[i]==s[j])&&(is_pal[i+1][j-1]==1)){
                    is_pal[i][j] =1;
                    if(len<(j-i+1)){
                        start = i;
                        end=j;
                        len=(j-i+1);
                    }

                }
                else{
                    is_pal[i][j] =0;
                }
            }
        }
    }
    
    if(n%2==0||(len==1)){
        cout<<s.substr(start,end+1);
    }
    else{
        cout<<s.substr(start,end);
    }
    return 0;
}