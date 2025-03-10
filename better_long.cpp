
// Problem statement
// There is an integer array ‘A’ of size ‘N’.

// A sequence is successive when the adjacent elements of the sequence have a difference of 1.

// You must return the length of the longest successive sequence.

// Note:

// You can reorder the array to form a sequence. 
// For example,

// Input:
// A = [5, 8, 3, 2, 1, 4], N = 6
// Output:
// 5
// Explanation: 
// The resultant sequence can be 1, 2, 3, 4, 5.    
// The length of the sequence is 5.

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.

    //better soln
    int n = a.size();
    if(n == 0) {
        return 0;
    }

    sort(a.begin() , a.end());

    int longest = 1;
    int currcnt = 0;
    int lastsmaller = INT_MIN;

    for(int i = 0; i< n; i++) {
        if(a[i]-1 == lastsmaller) {
            currcnt++;
            lastsmaller = a[i];
        }
        else if(a[i] != lastsmaller) {
            currcnt = 1;
            lastsmaller = a[i];
        }
        longest = max(longest , currcnt);
    }
    //longest = max(longest , currcnt);

    return longest;
}
