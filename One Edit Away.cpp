
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isOneEditAway(string s1, string s2) {

    int n = s1.length();
    int m = s2.length();

    // Length difference cannot be more than 1
    if (abs(n - m) > 1) {
        return false;
    }

    int i = 0, j = 0;
    int edits = 0;

    while (i < n && j < m) {

        if (s1[i] == s2[j]) {
            i++;
            j++;
        }
        else {
            edits++;

            if (edits > 1) {
                return false;
            }

            // Same length: replacement
            if (n == m) {
                i++;
                j++;
            }
            // First string is longer: deletion
            else if (n > m) {
                i++;
            }
            // Second string is longer: insertion
            else {
                j++;
            }
        }
    }

    return true;
}

int main() {

    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (isOneEditAway(s1, s2)) {
        cout << "Yes, strings are One Edit Away.";
    }
    else {
        cout << "No, strings are not One Edit Away.";
    }

    return 0;
}
