//recursion 
//another approach to print name 'n' times
#include<bits/stdc++.h>
using namespace std;

// int n , i;

//function with passing parameters
void disp(int i , int n){    //pass the parameters here along with their data types
  
  //base condition
  if(i > n){
    return;
  }
  else{
    cout<<"chetan"<<" ";
  }
  
  //recursive calling by incrementing a parameter till it satisfies base case
  //it will go on printing name simultaneously coz, else block will execute first and then function calling is done with increasing value of parameter 'i' assume it as an iterator for better understanding
  
  disp(i+1 , n);
}
int main(){
  int n;
  cout<<"enter n "<<endl;
  cin>>n;
  //calling function first time so it will start at i=1
  //pass the parameters accordingly
  disp(1,n);
  return 0;
}