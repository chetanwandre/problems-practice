//reverse the array    using one pointer approach


#include<iostream>
//#include<vector>
using namespace std;

void reverse(int i ,int arr[], int n){
    if(i>= n/2) return;
    else swap(arr[i] , arr[n-i-1]);
    reverse(i+1 , arr , n);
}

int main(){
    int n = 5;  //size of array
    int arr[n];    
    // cout<<"enter size "<<endl;
    // cin>>n;
    
    cout<<"enter array elements "<<endl;
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    
    reverse(0 , arr , n);
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// output:- 

//   enter array elements
// 1 2 3 4 5
//   5 4 3 2 1
