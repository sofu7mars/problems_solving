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
    
    string s = "AAAACACBA";
    unordered_map<char, int> isPal;
    string palindrome;
    for (auto c : s) {
        isPal[c]++;
    }
    char oddChar;
    int countOdd = 0;
    string half = "";
    for (auto it : isPal) {
        if (it.second % 2 != 0) {
            countOdd++;
            oddChar = it.first;
            cout << oddChar << endl;;
        }
        half += string(it.second / 2, it.first);

        cout << half << endl;
    }
    if (countOdd > 1) {
        cout << "Cant be a palindrome" << endl;
    } 

    palindrome = half;

    if (countOdd == 1) {
        palindrome += string(isPal[oddChar] % 2, oddChar);
    }

    reverse(half.begin(), half.end());

    palindrome += half;
    
    cout << palindrome << endl;

        
    return 0;
}