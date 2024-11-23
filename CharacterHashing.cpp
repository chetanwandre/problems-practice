//hash characters in string using ASCII values


CASE 1:- 

#include<iostream>
using namespace std;

int main(){
    // int n; 
    // cin>>n;
    string str;
    cin>>str;
    //precompute
    int hash[256] = {0};

    // ALL caseS
    for(int i = 0; i< str.size(); i++){
        hash[str[i]] += 1;
    }

    //fetching 
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }

    return 0;
}

// output:-

//     assseASOGHhhgoip
// 6
// a
// 1
// l
// 0
// s
// 3
// S
// 1
// h
// 2
// H
// 1




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
