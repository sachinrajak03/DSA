#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void nextsmaller(int *arr, int &size, vector<int> &ans) {
    stack<int> st;
    st.push(-1);
    for (int i = size - 1; i >= 0; i--) { // Corrected loop bounds
        int currelement = arr[i];
        while (st.top() >= currelement) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(currelement);
    }
}

int main() {
    int arr[5] = {2, 1, 4, 6, 3};
    int size = 5;
    vector<int> ans(size);
    nextsmaller(arr, size, ans);
    for (auto element : ans) { // Corrected variable name
        cout << element << " ";
    }
    cout << endl;
    return 0;
}

