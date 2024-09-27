#include<iostream>
#include<stack>
#include<string>

using namespace std;

int operation_res(int a,int b,char c){
    switch(c){
        case '+':
            return (a+(b));
        case '-':
            return (a-(b));
        case '*':
        return (a*(b));
        case '/':
            return (a/(b));
    }
}

int main(){
    string s = "";
    stack <int> operands;
    cout<<"Enter the postfix expression: ";
    getline(cin,s);
    string space = " ";
    s.append(space);
    int n = s.size();
    int i,j,a,b,result,tens;
    int sign;
    char c;
    i=j=a=b=result=0;
    while(j<n){
        while(s[j]!=' '){
            j++;
        }
        j--;
        tens=1;
        a=0;
        b=0;
        if(isdigit(s[j])==false){
            a= operands.top();
            operands.pop();
            b= operands.top();
            operands.pop();
            c = s[j];
            result = operation_res(b,a,c);
            operands.push(result);
        }
        else{sign=1;
             if(s[i]=='-'){
                 sign=sign*(-1);
             }
            for(int k = (j);k>=i;k--){
                if(isdigit(s[k])==true){
                    c = s[k];
                    a = a+(int(c-'0')*tens);
                    tens = tens*10;
                }
            }
            a = a*sign;
            operands.push(a);
        }
        j=j+2;
        i=j; 
    }
    b = operands.top();
cout<<b;
    return 0;
}