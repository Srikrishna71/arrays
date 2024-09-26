#include<iostream>
using namespace std;
int main(){
  int a[5]={16,2,56,9,3};
  for(int i=0;i<n-1;i++){
    int flag = 0;
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        flag = 1;
      }
    }
    if(flag==0) break;
  }
  return 0;
}
