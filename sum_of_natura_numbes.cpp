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

int recursiveSum(int input_val) {
    if (input_val <= 1) {
        return input_val;
    }
    return input_val + recursiveSum(input_val - 1);
}
int main(){
    int sum = recursiveSum(3);
    cout << sum << endl;
    return 0;
}