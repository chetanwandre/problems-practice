// Problem statement
// You are given an array 'a' of 'n' integers.



// A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.



// Find the majority element of the array.



// It is guaranteed that the array 'a' always has a majority element.



// Example:
// Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]

// Output: 1

// Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
// Hence ‘1’ is the majority element.

#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code
	int n = v.size();

	//better soln by hashmap
	map< int,int >mpp;
	for(int i = 0; i< n; i++) {
		mpp[v[i]]++;
	}

	for(auto it: mpp) {
		if(it.second > (n/2)) {
			return it.first;
		}
	}
	return -1;
}
