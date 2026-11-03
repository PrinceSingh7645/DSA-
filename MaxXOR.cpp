#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode* child[2];

    TrieNode() {
        child[0] = child[1] = NULL;
    }
};

void insert(TrieNode* root, int num) {
    TrieNode* node = root;

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;

        if (!node->child[bit])
            node->child[bit] = new TrieNode();

        node = node->child[bit];
    }
}

int findMaxXOR(TrieNode* root, int num) {
    TrieNode* node = root;
    int result = 0;

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        int opposite = 1 - bit;

        if (node->child[opposite]) {
            result |= (1 << i);
            node = node->child[opposite];
        } else {
            node = node->child[bit];
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    TrieNode* root = new TrieNode();

    for (int x : arr)
        insert(root, x);

    int ans = 0;

    for (int x : arr)
        ans = max(ans, findMaxXOR(root, x));

    cout << ans;

    return 0;
}