#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <stack>

using namespace std;


int main() {
    const char *arr[] = {"2", "1", "+", "3", "*", "4", "*"};
    stack<int> a;
    for (int i = 0; i < 7; i++) {
        int val1 = 0;
        if (arr[i] == "+") {
            val1 = a.top();
            a.pop();
            int res = a.top() + val1;
            a.pop();
            a.push(res);
        } else if (arr[i] == "*") {
            val1 = a.top();
            a.pop();
            int res = a.top() * val1;
            a.pop();
            a.push(res);
        } else if (arr[i] == "-") {
            val1 = a.top();
            a.pop();
            int res = a.top() - val1;
            a.pop();
            a.push(res);
        } else if (arr[i] == "/") {
            val1 = a.top();
            a.pop();
            int res = a.top() / val1;
            a.pop();
            a.push(res);
        } else {
            a.push(atoi(arr[i]));
        }
        
    }
    cout << "The result is: " << a.top() << endl;    
    return 0;
}