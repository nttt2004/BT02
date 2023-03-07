#include<iostream>
#include<math.h>
using namespace std;

void isPrime(int n){
  if(n==0||n==1) cout<<"no";
  int dem=0;
  for(int i=2; i<=sqrt(n); i++){
    if(n%i==0) dem++;
  }
  if(dem>0) cout<<"no";
  else cout<<"yes";
}
int main(){
  int n;
  cin>>n;
  isPrime(n);
  return 0;
}
