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
    int n = 20;
    unsigned long long int fact = 1;
    for (int i = n; i > 0; i--) {
        fact = fact * i;
    }
    cout << fact << endl;
    string s = to_string(fact);
    int count0 = 0;
    auto i = s.end() - 1;
    cout << "Size: " << s.size() << endl;;
    cout << *i << endl;
    while(*i == '0') {
        count0++;
        *i--;
    }
    cout << count0 << endl;
    return 0;
}