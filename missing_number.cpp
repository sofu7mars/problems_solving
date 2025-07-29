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
    int n  = 6;
    int arr[5] = {2, 3, 1, 5, 4};

    int check = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        check = n * (n + 1) / 2;
        if (i < n - 1) {
            sum += arr[i];    
        }
        
    }
    cout << (check - sum) << endl;


    return 0;
}