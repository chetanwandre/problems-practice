#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.

    //brute force   TC:- O(n^3) SC:- O(n)  extra space

    //int n = arr.size();
    set< vector<int >> st;
    for(int i = 0; i< n; i++) {
        for(int j = i+1; j< n; j++) {
            for(int k = j+1; k< n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> v = {arr[i] , arr[j] , arr[k]};  //vector to store each triplet
                    sort(v.begin() , v.end());     //sort to store unique triplets
                    st.insert(v);     //only unique triplets are added in set
                }
            }
        }
    }

    //insert all triplets from set to answer vector
    vector<vector<int>> ans(st.begin() , st.end());
    return ans;
}
