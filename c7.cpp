#include<iostream>
using namespace std;

int main(){
  int x;
  int a;
  do{
    a=x;
    cin>>x;
    if(x != a) cout<<x<<' ';
  }
  while(x>=0);
  return 0;

}
