
#include <iostream>
using namespace std;

// Structure of a linked list node
struct Node {
    int data;
    Node* next;
};

// Function to find intersection
Node* getIntersection(Node* headA, Node* headB) {

    Node* p1 = headA;
    Node* p2 = headB;

    while (p1 != p2) {

        if (p1 == NULL) {
            p1 = headB;
        }
        else {
            p1 = p1->next;
        }

        if (p2 == NULL) {
            p2 = headA;
        }
        else {
            p2 = p2->next;
        }
    }

    return p1;
}

int main() {

    // Creating first linked list
    Node* headA = new Node{1, NULL};
    headA->next = new Node{2, NULL};
    headA->next->next = new Node{3, NULL};

    // Creating second linked list
    Node* headB = new Node{4, NULL};
    headB->next = new Node{5, NULL};

    // Creating shared nodes
    Node* common1 = new Node{6, NULL};
    Node* common2 = new Node{7, NULL};

    common1->next = common2;

    // Connecting both lists to the same nodes
    headA->next->next->next = common1;
    headB->next->next = common1;

    Node* result = getIntersection(headA, headB);

    if (result != NULL) {
        cout << "Intersection node value: "
             << result->data;
    }
    else {
        cout << "No intersection found.";
    }

    return 0;
}
