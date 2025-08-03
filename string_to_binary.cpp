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

string findBynary(int value, string s) {
    if (value == 0) {
        return s;
    }
    s = char('0' + (value % 2)) + s;
    return findBynary(value / 2, s);    


}

int main() {
    string s = findBynary(233, "");
    cout << s << endl;
}