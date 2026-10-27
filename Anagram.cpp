#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "anagram";
    string t = "nangram";

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t) {
        cout << "Valid Anagram";
    } else {
        cout << "Not a Valid Anagram";
    }

    return 0;
}