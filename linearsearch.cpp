#include<iostream>
using namespace std;
bool linearsearchh(int a[],int n,int key){
    if(n==0) return 0;
    if(a[0]==key){
        return 1;
    }
    else{
        int rem = linearsearchh(a+1,n-1,key);
        return rem;
    }
}
int main(){
    int a[5] = {1,2,3,4,5};
    int ans=linearsearchh(a,5,2);
    if(ans){
        cout<<"present"<<endl;
    }
    else cout<<"not present";
    return 0;     
}
