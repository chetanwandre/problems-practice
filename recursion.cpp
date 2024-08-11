//print n to 1 without using global variable
#include<bits/stdc++.h>
using namespace std;

void print(int i , int n){
    if(i<1){
        return;
    }
    else{
        cout<<i<<" ";
        print(i-1 , n);
    }
}

int main(){
    cout<<"hello chetan "<<endl;
    int n , i;
    cout<<"enter i and n "<<endl;
    cin>>i>>n;
    print(n,n);
    return 0;
}