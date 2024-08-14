//recursion 
//print all even nos recursively in reverse order
#include<bits/stdc++.h>
using namespace std;

int cnt = 30;
void even(){
  if(cnt <= 6){
    return;
  }
  else{
    cout<<cnt<<" ";
    cnt = cnt - 2;
  }
  even();
}

int main(){
  cout<<"hello world "<<endl;
  even();
  return 0;
}