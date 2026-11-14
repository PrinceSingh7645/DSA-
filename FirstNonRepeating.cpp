#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int main() {

    string s = "aabc";
    queue<char> q;
unordered_map<char, int> freq;
for (int i = 0; i < s.length(); i++) {

    char ch = s[i];

    freq[ch]++;

}

    return 0;
}