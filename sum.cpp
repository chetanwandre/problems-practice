
//recursion problem :- print sum of  n  numbers by parameters


#include<bits/stdc++.h>
using namespace std;

int printsum(int n){
    if(n == 0){
        return 0;
    }
        //call function recursively
        return n + printsum(n-1);
}

int main(){
    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    cout<<printsum(n)<<endl;
    return 0;
}


enter number 
4
the sum is 10
PS C:\Users\User\OneDrive\Desktop\chetan\C++>
