//optimal solution 
//Dutch National Flag Algo (DNF)


#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here

    //Dutch National Flag Algorithm (DNF)
    
    int low = 0; 
    int high = n-1;
    int mid = 0;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[mid] , arr[low]);
            low++;
            mid++;
        }

        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }

    return;
}
