
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
// Example 3:

// Input: nums = [1,0,1,2]
// Output: 3

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        //optimal soln
        int n = nums.size();
        int longest = 1;
        int cnt = 1;
        unordered_set <int> st;

        if(n == 0) {
            return 0;
        }

        for(int i = 0; i< n; i++) {
            st.insert(nums[i]);
        }

        for(auto it : st) {
            if(st.find(it-1) == st.end()) {
                cnt = 1;
                int x = it;
                
                while(st.find(x+1) != st.end()) {
                    x = x+1;
                    cnt = cnt+1;
                     
                }
            }
            longest = max(longest , cnt);
        }
        return longest;
    }
};
