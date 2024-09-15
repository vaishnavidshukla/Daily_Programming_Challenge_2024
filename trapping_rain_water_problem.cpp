#include<iostream>

using namespace std;

int main(){
    int a[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(a)/sizeof(int);
    int i = 1;
    int j= n-2;
    int left_max = a[0];
    int right_max = a[n-1];
    int total=0;
    while(i<=j){
        if(left_max<=right_max){
            if(left_max<a[i]){
                left_max= a[i];
            }
            else{
                total+= (left_max-a[i]);
            }
            i++;
        }
        else{
            if(right_max<a[j]){
                right_max = a[j];
            }
            else{
                total+=(right_max-a[j]);
            }
            j--;
        }
    }
    cout<<endl<<total<<endl;
    return 0;

}