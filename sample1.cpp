//recursion 
//print n to 1 by backtracking

#include<bits/stdc++.h>
using namespace std;

void show(int i , int n){
    if(i > n){
        return;
    }
    else{
        //first call fun recursively
        //till it goes to nth value and start returning then it will print in reverse order
        show(i+1 , n);
        cout<<i<<" ";
    }
}

int main(){

    int i , n;
    cout<<"enter n "<<endl;
    cin>>n;
    show(1 , n);
    return 0;
}