// CODE FOR HASHING

// count the freq of elements in the array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    //precompute
    int hash[10] = {0};
    for(int i = 0; i< n; i++){
        hash[arr[i]] += 1;
    }

    //fetch the freq
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }


    return 0;
}



// EXPLANATION


// Let me provide a detailed example to explain how the **element value is used as the index** when using a fixed-size array as a hashmap.

// ---

// ### Example Walkthrough

// #### Input:
// ```text
// Array: {3, 5, 3, 7, 5}
// ```

// Here, we want to count the frequency of each element in the array.

// #### Hash Array:
// - Let's create a fixed-size array `hash[]` that can store the frequencies.
// - Assume the range of elements in the array is `0` to `10`, so the size of the `hash[]` array is `11`.

// #### Step 1: Initialize `hash[]`
// Initially, the hash array is filled with zeros (no elements counted yet):
// ```text
// hash = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
//          0  1  2  3  4  5  6  7  8  9 10
//          ^  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^
// ```
// The indices of the array (`0` to `10`) correspond to potential element values in the input array.

// #### Step 2: Precompute Frequencies
// For each element in the input array, increment its corresponding index in the `hash[]` array.

// - Process the first element, `3`:
//   ```text
//   hash[3] += 1
//   hash = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}
//   ```

// - Process the second element, `5`:
//   ```text
//   hash[5] += 1
//   hash = {0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0}
//   ```

// - Process the third element, `3` (again):
//   ```text
//   hash[3] += 1
//   hash = {0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0}
//   ```

// - Process the fourth element, `7`:
//   ```text
//   hash[7] += 1
//   hash = {0, 0, 0, 2, 0, 1, 0, 1, 0, 0, 0}
//   ```

// - Process the fifth element, `5` (again):
//   ```text
//   hash[5] += 1
//   hash = {0, 0, 0, 2, 0, 2, 0, 1, 0, 0, 0}
//   ```

// #### Final State of `hash[]`:
// ```text
// hash = {0, 0, 0, 2, 0, 2, 0, 1, 0, 0, 0}
//          0  1  2  3  4  5  6  7  8  9 10
// ```

// #### Step 3: Use Index for Queries
// Now, the `hash[]` array stores the frequency of each element. To get the frequency of an element `x`, simply access `hash[x]`.

// For example:
// - Frequency of `3` → `hash[3] = 2`
// - Frequency of `5` → `hash[5] = 2`
// - Frequency of `7` → `hash[7] = 1`
// - Frequency of `4` → `hash[4] = 0` (not present in the array)

// ---

// ### Key Idea
// - **Element value as index:** 
//   Each element in the input array is treated as an **index** in the `hash[]` array.
// - **Increment the value at the index:** 
//   Each time the element appears in the array, increment the value at its corresponding index in `hash[]`.

// ---

// ### Output for Queries
// If the queries are:
// ```text
// Query: 3, 5, 7, 4
// ```

// Output:
// ```text
// 2
// 2
// 1
// 0
// ``` 

// This demonstrates how the element value (`3`, `5`, etc.) is directly mapped to an index in the `hash[]` array.
