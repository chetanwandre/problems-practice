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
