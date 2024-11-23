CASE 2:- 
//hash characters in string using ASCII values

#include<iostream>
using namespace std;

int main(){
    // int n; 
    // cin>>n;
    string str;
    cin>>str;
    //precompute
    int hash[26] = {0};

    // lowercases
    for(int i = 0; i< str.size(); i++){
        hash[str[i] - 'a'] += 1;
    }

    //fetching 
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c - 'a']<<endl;
    }

    return 0;
}


// output:-
    
// aaeeiiiokkkcc
// 4
// i
// 3
// c
// 2
// g
// 0
// k
// 3
