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

int bs(int *arr, int l, int r, int target) {
    if (l > r) {
        return -5;
    }
    int m = (l + r) / 2;
    if (target == arr[m]) {
        return target;
    } 
    if (target < arr[m]) {
        return bs(arr, l, m - 1, target);
    }
    if (target > arr[m]) {
        return bs(arr, m + 1, r, target);
    }
}

int main() {
    int arr[] = {-1, 0, 1, 2, 3, 4, 7, 9, 10, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = size - 1;
    cout << bs(arr, l, r, -1);
    return 0;
}