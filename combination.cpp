//combinatorics 
//combinations

#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1 || n == 0)
        return 1;
    else
    return n*fact(n-1);
}

int combi(int n , int k){
    if(k > n)
    return 0;
    else
    return fact(n) / (fact(k)*fact(n-k));
}

int main(){
    int k,n;
    cout<<"enter n and k"<<endl;
    cin>>k>>n;
    cout<<combi(n , k)<<endl;
    return 0;
}
