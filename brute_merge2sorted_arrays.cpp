#include<bits/stdc++.h>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	int left = 0;
	int right = 0;
	int n = a.size();
	int m = b.size();

	int index = 0;
	int arr3[m+n];

	while(left < n && right < m) {
		if(a[left] <= b[right]) {
			arr3[index] = a[left];
			left++;
			index++;
		}
		else {
			arr3[index] = b[right];
			right++;
			index++;
		}
	}

	while(left < n) {
		arr3[index++] = a[left++];
	}
	while(right < m) {
		arr3[index++] = b[right++];
	}

	for(int i = 0; i< n+m; i++) {
		if(left < n) {
			a[i] = arr3[i];
		}
		else {
			b[i-n] = arr3[i];
		}
	}
	

	return;
}
