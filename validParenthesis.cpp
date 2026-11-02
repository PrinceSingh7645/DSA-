#include <iostream>
#include <stack>
using namespace std;

int main() {

    string s = "{[]}";

    stack<char> st;

    for(int i = 0; i < s.length(); i++) {

        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }

        else {

            if(st.empty()) {
                cout << "Invalid";
                return 0;
            }

            char top = st.top();
            st.pop();

            if((s[i] == ')' && top != '(') ||
               (s[i] == '}' && top != '{') ||
               (s[i] == ']' && top != '[')) {

                cout << "Invalid";
                return 0;
            }
        }
    }

    if(st.empty()) {
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }

    return 0;
}