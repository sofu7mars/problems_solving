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

void mergea(int *arr, int start, int mid, int end) {
    int *temp = new int(end - start + 1);
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++]; 
    }
    while (j <= end) {
        temp[k++] = arr[j++];
    }
    for (int i = start; i <= end; i++) {
        arr[i] = temp[i - start];
    }
    delete [] temp;
}

void merge_sort(int *arr, int start, int end) {
    if (start < end) {
        int m = (start + end) / 2;
        merge_sort(arr, start, m);
        merge_sort(arr, m + 1, end);
        mergea(arr, start, m, end);
    }
}
int main() {
    int arr[] = {4, 1, 3, 2, 0, -1, 7, 10, 9, 20};
    size_t size = (sizeof(arr) / sizeof(arr[0]));
    merge_sort(arr, 0, size - 1);
    for (int i =0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        cout << arr[i] << '\t';
    }
    return 0;
}