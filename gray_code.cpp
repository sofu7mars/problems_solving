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
#include <bitset>
using namespace std;


int main() {
    const int n = 3;
    
    int val = 0;
    // cout << bitset<8>(val) << endl;
    // cout << bitset<8>(1 << n) << endl;
    for (int i = 0; i < (1 << n); i++) {
        int gray = i ^ (i >> 1);
        cout << bitset<n>(i) << '\t' << bitset<n>(i >> 1) << '\t' <<  bitset<n>(gray) << endl;
        
    }
    return 0;
}