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

void hanoi(int n, char source, char target, char middle) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }

    hanoi(n - 1, source, middle, target);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    hanoi(n - 1, middle, target, source);

}

int main() {

    int n = 3;

    hanoi(n, 'L', 'M', 'R');

    return 0;
}