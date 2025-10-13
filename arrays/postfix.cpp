#include <bits/stdc++.h>
using namespace std;

int main() {
    string exp = "6 2 3 + - 3 8 2 / + *";
    stack<int> st;
    int n = exp.length();
    int i = 0;

    while (i < n) {
        if (exp[i] == ' ') {
            i++;
            continue;
        }
        if (isdigit(exp[i])) {
            int num = 0;
            while (i < n && isdigit(exp[i])) {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            st.push(num);
        }
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
            switch (exp[i]) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
            i++;
        }
    }

    cout << "Result = " << st.top() << endl;
    return 0;
}
