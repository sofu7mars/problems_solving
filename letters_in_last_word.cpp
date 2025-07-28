#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <list>
#include <cstring>
#include <queue>
using namespace std;

int countLetters(const char *s) {
    int n = strlen(s);
    if (n == 0) {
        return 0;
    }
    int count = 0;
    int lastEl = n - 1;    
    while (s[lastEl] == ' ') {
        lastEl = lastEl - 1;
    }
    for (int i = 0; i <= lastEl; i++) {
        if (s[i] != ' ') {
            count++;
        } else {
            count = 0;
        }
    } 
    return count;
}

int main() {

    const char *s = "I don't know what it is   ";
    string s1 = "Hello world";
    cout << "String length: " << (sizeof(s1) / sizeof(s1[0])) << endl;
    int letters = countLetters(s);
    cout << "Letter in last word: " << letters << endl;

    return 0;
}