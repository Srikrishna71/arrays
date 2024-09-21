//delete an element
#include<iostream>
using namespace std;
void deleted(int a[],int pos,int n){
    int temp=a[pos];
    for(int i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5]={1,7,32,66,22};
    deleted(a,3,6);
    return 0;     
}
