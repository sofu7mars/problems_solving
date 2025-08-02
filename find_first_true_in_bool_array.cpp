#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <stack>
#include <unordered_map>
#include <string>
#include <cctype>
using namespace std;

int main() {
    bool arr[] = {false, false, false, true, true, true, true, true};
    int l = 0, r = (sizeof(arr) / sizeof(arr[0])) - 1;
    cout << r << endl;
    int m = 0;
    int true_index = 0;
    while (l <= r) {
        m = (l + r) / 2;
        if (arr[m]) {
            true_index = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    cout << true_index << endl;
}