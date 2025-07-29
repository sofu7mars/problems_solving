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
    int n = 5;
    int arr[5] = {3, 2, 5, 3, 7};
    int count = 0;
    // for (int i = 1; i < n; i++) {
    //     while(arr[i] < arr[i - 1]) {
    //         arr[i]++;
    //         count++;
    //     }
    // }
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i -1]) {
            int dif = arr[i - 1] - arr[i];
            arr[i] = dif + arr[i];
            count += dif;
        }
    }
    cout << count << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}