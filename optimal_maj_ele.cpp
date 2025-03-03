
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

//optimal soln by Moore's voting algorithm


int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int cnt1 = 0;
	int ele;

	for(int i = 0; i< n; i++) {
		if(cnt1 == 0) {
			cnt1 = 1;
			ele = v[i];
		}
		else if(v[i] == ele) {
			cnt1++;
		}
		else {
			cnt1--;
		}
	}

	int cnt = 0;
	for(int i = 0; i< n; i++) {
		if(v[i] == ele) {
			cnt++;
		}
	}
	if(cnt > (n/2)) {
		return ele;
	}
	return -1;
}
