class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area = 0;
        int temp = 0;

        for(int i = 0 ; i < heights.size() ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int x = st.top();
                st.pop();
                int left = st.empty()? -1 : st.top();
                int width = i - left - 1;
                temp = heights[x]*width;
                area = max(area,temp);
            }
            st.push(i);
        }
        int right = heights.size();
        while(!st.empty()){
            int x = st.top();
            st.pop();
            int left = st.empty()? -1 : st.top();
            int width = right - left - 1;
            temp = heights[x]*width;
            area = max(area,temp);
        }
        return area;
    }
};