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
    
    int arr[5][5] = {
        {1, 2, 9, 10, 25},
        {4, 3, 8, 11, 24},
        {5, 6, 7, 12, 23},
        {16, 15, 14, 13, 22},
        {17, 18, 19, 20, 21}
    };
    int t = 3;
    int lines[t][2] = {
        {2, 3},
        {1, 1},
        {4, 2}
    };
    for (int i = 0; i < t; i++) {
        // cout << lines[i][0] << endl;
        // cout << lines[i][1] << endl;
        cout << arr[lines[i][0] - 1][lines[i][1] - 1] << endl;
    }
    return 0;
}