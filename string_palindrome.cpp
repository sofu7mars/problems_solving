#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <stack>
#include <unordered_map>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // valid palindrome
    string s = "A man, a plan, a canal: Panama";
    int l = 0, r = s.length() - 1;
    
    cout << s << endl;
    
    bool pal = true;
    while (l < r) {
        while (l < r && !isalnum(s[l])){
            l++;
        }
        while (l < r && !isalnum(s[r])){
            r--;
        }
        if (tolower(s[l]) != tolower(s[r])) {
            cout << s[l] << '\t' << s[r] << endl;
            pal = false;
            break;
        }
        cout << s[l] << '\t' << s[r] << endl;
        l++;
        r--;
    }
    if (pal) {
        cout << "Is palindrome!" << endl;
    } else {
        cout << "Not a palindrome!" << endl;
    }

    return 0;
}