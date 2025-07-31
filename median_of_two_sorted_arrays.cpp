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
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {1, 2, 3, 4, 5};
    int *a = arr1;
    int *b = arr2;
    int sizeA = sizeof(arr1) / sizeof(arr1[0]);
    int sizeB = sizeof(arr2) / sizeof(arr2[0]);
    int totalSize = sizeA + sizeB;
    int halfTotal = totalSize / 2;

    if (sizeA > sizeB) {
        int *temp = a;
        a = b;
        b = temp;
        int tempSize = sizeA;
        sizeA = sizeB;
        sizeB = tempSize;
    }

    int l = 0, r = sizeA - 1;
    int m = 0, bR = 0;
    int bol = true;
    while(bol) {
        m = (l + r) / 2;
        bR = halfTotal - m;
        
        int Aleft = a[m - 1];
        int Aright = a[m];
        int Bleft = b[bR - 1];
        int Bright = b[bR];

        if (Aleft <= Bright && Bleft <= Aright) {
            if (totalSize % 2 == 1) {
                cout << "Median is1: " << min(Aright, Bright) << endl;
                bol = false;
                break;
            }
            cout << "Median is2: " << (float)(max(Aleft, Bleft) + min(Aright, Bright)) / 2 << endl;
            bol = false;
            break;
        } else if( Aleft > Bright) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    return 0;
}