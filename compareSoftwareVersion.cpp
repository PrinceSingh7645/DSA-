
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int compareVersions(string v1, string v2) {

    stringstream ss1(v1);
    stringstream ss2(v2);

    string part1, part2;

    while (getline(ss1, part1, '.') ||
           getline(ss2, part2, '.')) {

        int num1 = 0;
        int num2 = 0;

        if (part1 != "") {
            num1 = stoi(part1);
        }

        if (part2 != "") {
            num2 = stoi(part2);
        }

        if (num1 > num2) {
            return 1;
        }

        if (num1 < num2) {
            return -1;
        }

        part1 = "";
        part2 = "";
    }

    return 0;
}

int main() {

    string v1, v2;

    cout << "Enter first version: ";
    cin >> v1;

    cout << "Enter second version: ";
    cin >> v2;

    int result = compareVersions(v1, v2);

    if (result == 1) {
        cout << "Version 1 is greater.";
    }
    else if (result == -1) {
        cout << "Version 2 is greater.";
    }
    else {
        cout << "Both versions are equal.";
    }

    return 0;
}
