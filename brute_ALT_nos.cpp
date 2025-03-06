
// Problem statement
// There is an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.

// Without altering the relative order of positive and negative numbers, you must return an array of alternative positive and negative values.

// Note:

// Start the array with a positive number. 
// For example

// Input:
// A = [1, 2, -4, -5], N = 4
// Output:
// 1 -4  2 -5
// Explanation: 
// Positive elements = 1, 2
// Negative elements = -4, -5
// To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 2 <= N <= 10^5 
// -10^9 <= A[i] <= 10^9, A[i] != 0
// N%2==0

#include<bits/stdc++.h>
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.

    //brute force soln
    //TC :- O(N)+O(N/2)
    //SC:-  O(N)   Extra space

    int n = a.size();
    vector<int> pos;
    vector<int> neg;

    for(int i = 0; i< n; i++) {
        if(a[i] < 0) {
            neg.push_back(a[i]);
        }
        else {
            pos.push_back(a[i]);
        }
    }

    for(int i = 0; i< n/2; i++) {
        a[2*i] = pos[i];
        a[(2*i)+1] = neg[i];
    }

    return a;
}
