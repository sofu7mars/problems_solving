#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <list>
#include <cstring>
#include <queue>
using namespace std;



int main() {
    int n = 7;
    set<int> set1, set2;
    int sum = (n * (n + 1)) / 2;
    int targetSum = sum / 2;
    if (sum % 2 == 0) {
        for (int i = n; i > 0; i--) {
            if (i <= targetSum) {
                set1.insert(i);
                targetSum = targetSum - i;
                cout << targetSum << endl; 
            } else set2.insert(i);
        }
    } else cout << "No" << endl;
    cout << endl;
    for (auto it = set1.begin(); it != set1.end(); ++it) {
        cout << *it << endl;
    }
    for (auto it = set2.begin(); it != set2.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}