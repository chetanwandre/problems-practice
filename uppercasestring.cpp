CASE 3:- 
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

    // uppercases
    for(int i = 0; i< str.size(); i++){
        hash[str[i] - 'A'] += 1;
    }

    //fetching 
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c - 'A']<<endl;
    }

    return 0;
}


// output
// GADGAAWWWEEETTO
// 5
// G
// 2
// W
// 3
// E
// 3
// H
// 0
// D
// 1
