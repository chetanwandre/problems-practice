

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


vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    
    //return back to brute force no equal no. of pos and neg elements
    int posind = 0;
    int negind = 1;
    int n = a.size();
    vector<int> pos;
    vector<int> neg;


    //insert elements into 2 pos and neg arrays
    for(int i = 0; i< n; i++) {
        if(a[i] > 0) {
            pos.push_back(a[i]);
        }
        else {
            neg.push_back(a[i]);
        }
    }

    //2nd part of normally adding elements and then adding extra elements withput altering the order
    if(pos.size() > neg.size()) {
        for(int i = 0; i< neg.size(); i++) {
            a[2*i] = pos[i];
            a[(2*i)+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size(); i< pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    }

    else {
        for(int i = 0; i< pos.size(); i++) {
            a[2*i] = pos[i];
            a[(2*i)+1] = neg[i];
        }
        int index = pos.size()*2;
        for(int i = pos.size(); i< neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}
