
// Problem statement
// You are given an array/list 'prices' where the elements of the array represent the prices of the stock as they were yesterday and indices of the array represent minutes. Your task is to find and return the maximum profit you can make by buying and selling the stock. You can buy and sell the stock only once.

// Note:

// You can’t sell without buying first.
// For Example:
// For the given array [ 2, 100, 150, 120],
// The maximum profit can be achieved by buying the stock at minute 0 when its price is Rs. 2 and selling it at minute 2 when its price is Rs. 150.
// So, the output will be 148.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 2 <= N <= 10^4
// 1 <= ARR[i] <= 10^9

// Time Limit: 1 sec.


#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int sell;
    int profit = 0; 
    int mini = prices[0];
    int n = prices.size();

    for(int i = 0; i< n; i++) {
        sell = prices[i] - mini;
        profit = max(profit , sell);
        mini = min(mini , prices[i]);
    }
    return profit;
}
