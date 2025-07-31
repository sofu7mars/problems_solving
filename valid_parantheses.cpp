#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <cstring>
#include <queue>
using namespace std;


int main() {
    string  s = "[{()}]";
    stack<char> st;
    int state = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } else {
            if(!st.empty() &&
                ((st.top() == '(' && s[i] == ')') ||
                 (st.top() == '[' && s[i] == ']') ||
                 (st.top() == '{' && s[i] == '}'))) {
                    st.pop();
            } else {
                st.push(s[i]);
            }
        }
    }

    if (st.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }




    return 0;
}