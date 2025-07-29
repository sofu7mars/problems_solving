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

    int n = 15;
    int arr[n] = {};
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) cout << i << '\t';
    }
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) cout << i << '\t';
    }
    
    return 0;
}