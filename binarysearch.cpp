//binary search
#include<iostream>
using namespace std;
bool binarysearchh(int a[],int s,int e,int key){
    if(s>e) return false;
    int mid = s+(e-s)/2;
    if(a[mid]==key) return true;
    if(a[mid]<key) return binarysearchh(a,mid+1,e,key);
    else return binarysearchh(a,s,mid-1,key);
}
int main(){
    int a[6] = {13,29,37,45,55,62};
    int ans=binarysearchh(a,0,5,62);
    cout<<ans<<endl;
    return 0;     
}
