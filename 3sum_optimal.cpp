
#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    //optimal solution using three pointers

    vector<vector<int >> ans;
    sort(arr.begin() , arr.end());
    
    for(int i = 0; i< n; i++) {
        int j = i+1;
        int k = n-1;
        // int sum = arr[i] + arr[j] + arr[k];
        if(i > 0 && arr[i-1] == arr[i]) {
            continue;
        }
        // int sum = arr[i] + arr[j] + arr[k];
        while(j < k) {
        int sum = arr[i] + arr[j] + arr[k];
        if(sum > 0) {
            k--;
        }
        else if(sum < 0) {
            j++;
        }
        else {
            vector<int>temp = {arr[i] , arr[j] , arr[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j < k && arr[j] == arr[j-1]) {
                j++;
            }
            while(j < k && arr[k] == arr[k+1]) {
                k--;
            }
        }

            // while(j < k && arr[j] == arr[j-1]) {
            //     j++;
            // }
            // while(j < k && arr[k] == arr[k+1]) {
            //     k--;
            // }
        }
        

    }
    return ans;
}
