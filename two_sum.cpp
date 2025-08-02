#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <stack>
#include <map>
using namespace std;

void two_sum(int *arr, int size, int *output_arr){
    map<int, int> m;
        int target = 4;
        for (int i = 0; i < size; i++) {
            int complement = target - arr[i];
            if (m.find(complement) == m.end()) {
                m[arr[i]] =i ;
            } else {
                cout << arr[i] << '\t' << arr[m[complement]] << endl;
                output_arr[0] = arr[i];
                output_arr[1] = arr[m[complement]];
                break;
            }
        }  
        
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7};
    int output_arr[] = {0, 0};
    two_sum(arr, (sizeof(arr) / sizeof(arr[0])), output_arr);
    cout << output_arr[0] << '\t' << output_arr[1] << endl;
    return 0;
}