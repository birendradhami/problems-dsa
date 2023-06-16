class Solution {
public:
    int longestValidParentheses(string A) {
  stack<int> st;
  st.push (-1);
  int maxlen = 0;
  for (int i=0; i<A.size(); ++i) {
    if (A[i] == '(')
      st.push(i);
    else {                              //3
      if (!st.empty())
        st.pop();
      if (!st.empty())
        maxlen = max(maxlen, i - st.top());
      else
        st.push(i);
    }
  }
  return maxlen;
}
};