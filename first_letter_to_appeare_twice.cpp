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

char fltat(string s) {
    unordered_map<char, int> letters;
    letters.insert(pair<char, int>(s[0], 1));
    for (int i = 1; i < s.length(); i++) {
        if (letters.find(s[i]) != letters.end()) {
            return s[i];
        }
        letters.insert(pair<char, int> (s[i], 1));
        letters[s[i]]++;
    }
    return 0;
}

char fltat1(string s) {
    unordered_map<char, int> letters;
    for (char c : s) {
        letters[c]++;
        if (letters.find(c) != letters.end()) {
            return c;
        }
    }
    return 0;
}


int main() {

    string s = "Fweiirst letter to appeare twice";
    
    cout << fltat(s) << endl;

    cout << s << endl;
    
    return 0;
}