#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "";
    cout<<"Enter the sentence: ";
    getline(cin,s);
    int i,j;
    j=s.length()-1;
    while(s[j]==' '){
        j--;
    }
    i=j;
    cout<<"\"";
    while(j>0){
        while(s[i]==' '&&i>=0&&j>=0){
            i--;
            j--;
        }
        while(s[i]!=' '&& i>0){
            i--;
        }
        for(int k =i;k<=j;k++){
            if(s[k]!=' '){
                cout<<s[k];
            }
        }
        if(i>0){
            cout<<" ";
        }
        j=i;

    }
    cout<<"\"";

    return 0;
}