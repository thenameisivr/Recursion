#include<iostream>
using namespace std;
int sum(int n){
  if(n==0){
    return 0;
  }
  int num = n+sum(n-1);
  return num;
}
int main(){
  cout<<sum(5);
}