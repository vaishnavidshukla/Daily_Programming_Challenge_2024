#include<iostream>
#include<stack>

using namespace std;

void insert_num(stack <int> &st, int num,int top){
    if(top==0||st.top()>=num){
        st.push(num);
        return;
    }
    int val = st.top();
    st.pop();
    top--;
    insert_num(st,num,top);
    st.push(val);
}

void sort_stack(stack <int> &st,int top){
    if(top==1){
        return;
    }
    int val = st.top();
    st.pop();
    top--;
    sort_stack(st,top);
    insert_num(st,val,top);
}

int main(){
    stack <int> st;
    int a,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n==0){
        cout<<"[]";
        return 0;
    }
    cout<<"Enter the elements of stack: ";
    for(int i=0;i<n;i++){
        cin>>a;
        st.push(a);
    }
    sort_stack(st,n);

    cout<<"[";
    for(int i =0;i<(n);i++){
        a= st.top();
        st.pop();
        cout<<a<<" ";
    }
    cout<<"]";
    return 0;
}