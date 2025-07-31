#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <list>
#include <cstring>
#include <queue>
using namespace std;

int main() {

    int arr[] = {4, 5, 6, 1, 2, 3};

    int size = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = size - 1;
    int m = (int) ((l + r) / 2);
    cout << ((3 + 4) / 2) << endl;
    
    while (l < r) {
        if (arr[l] > arr[r]) {
            l = m + 1;
        } else {
            r = m;
        }
        m = (int) ((l + r) / 2); 
    } 

    cout << arr[l] << endl;

    return 0;
}