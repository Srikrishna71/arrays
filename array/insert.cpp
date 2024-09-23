//insert element
#include<iostream>
using namespace std;
void insert(int a[],int num,int pos){
    int n=5;
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[5]={1,7,32,66,22};
    insert(a,52,3);
    return 0;     
}
