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
    int arr[5] = {1, 2, 5, 6, 7};
    set<int> a;
    bool b = false;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        if (a.find(arr[i]) != a.end()) {
            b = true;
        } else {
            a.insert(arr[i]);    
        }
    }

    if (b){
        cout << "there is a duplicate" << endl;
    } else cout << "There is no duplicate" << endl;


    return 0;
}