class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0); // Initialize the answer array with 0s
        stack<int> st; // Stack to store indices of temperatures
        
        for (int i = 0; i < n; i++) {
            // While the stack is not empty and the current temperature is higher than the temperature at the index stored in the stack
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int idx = st.top(); // Get the index of the day with lower temperature
                st.pop(); // Remove that index from the stack
                ans[idx] = i - idx; // Calculate the number of days until a warmer temperature
            }
            st.push(i); // Push the current day's index onto the stack
        }
        
        return ans;
    }
};
