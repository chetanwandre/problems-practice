//sort array of 0s, 1s and 2s using 3 counters approach 

//better solution

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here

    //better solution
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int x = arr.size();
    for(int i = 0; i< x; i++) {
        if(arr[i] == 0) {cnt0++;}
        else if(arr[i] == 1) {
            cnt1++;
        }
        else {
            cnt2++;
        }
    }

    for(int i = 0; i< cnt0; i++) {
        arr[i] = 0;
    }
    for(int i = cnt0; i < cnt0+cnt1; i++) {
        arr[i] = 1;
    }
    for(int i = cnt0+cnt1; i < x; i++) {
        arr[i] = 2;
    }
    return;
}
