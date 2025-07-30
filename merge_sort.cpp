#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <list>
#include <stack>
#include <queue>


using namespace std;

void merge(int arr[], int first, int mid, int last) {
    int n1 = mid - first + 1;
    int n2 = last - mid;

    int L[n1], M[n2];
    for (int i = 0; i < n1; ++i) {
        L[i] = arr[first + i];
    }
    for (int j = 0; j < n2; ++j) {
        M[j] = arr[mid + 1 +j];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = first;
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }

}
void mergeSort(int arr[], int first, int last) {
    if (first < last) {
        int mid = first + (last - first) / 2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

int main() {
    int arr[] = {1, 6, 2, 5, 19, 11, 23, 8, 10};
    mergeSort(arr, 0, 8);

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << '\t';
    }

    return 0;
}