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

void weirdAlgorithm(int n) {
    int steps = 0;
    while (n != 1) {
        cout << n << '\t';
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3;
            n++;
        }   
        steps++;
    }
    cout << 1 << endl;
    
}

int main() {

    weirdAlgorithm(3);

    return 0;
}