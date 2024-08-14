//print n to 1 without using global variable

//source code :- 
#include<bits/stdc++.h>
using namespace std;

//passing parameters to the function
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

// output

// hello chetan 
// enter i and n 
// 1 10
// 10 9 8 7 6 5 4 3 2 1
