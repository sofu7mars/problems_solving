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

int repetition(const char *s) {
    unordered_map<char, int> repetitions;

    for (int i = 0; i < strlen(s); i++) {
        repetitions[s[i]]++;
        cout << repetitions[s[i]] << endl;
    }
    int maxRep = repetitions.at(s[0]);
    cout << maxRep << endl;
    for (auto pair : repetitions) {
        cout << pair.first << " : " << pair.second << endl;
        if (maxRep < pair.second) {
            maxRep = pair.second;
        }
        
    }
    
    cout << maxRep << endl;
    return maxRep;
}

int main() {

    const char *s = "ATTCGGGAAAAA";
    repetition(s);


    return 0;
}