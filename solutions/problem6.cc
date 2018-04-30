#include <iostream>
#include <cstdint>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    struct Node* npx;
};

struct Node* XOR (struct Node* a, struct Node* b){
    return (struct Node *) ( (uintptr_t) (a) ^ (uintptr_t) (b));
};

void add(struct Node **head_ref, int data) {
    struct Node *new_node = (struct Node *) malloc (sizeof (struct Node *) );
    new_node->data = data;
    new_node->npx = XOR(*head_ref, NULL);
    if (*head_ref != NULL)
    {
        // *(head_ref)->npx is XOR of NULL and next. 
        // XOR of it with NULL gives next
        struct Node* next = XOR((*head_ref)->npx, NULL);
        (*head_ref)->npx = XOR(new_node, next);
    }

    *head_ref = new_node;
}

void get(struct Node**head_ref, int index) {
    if(!index)
        cout << head_ref->data;


}

int main() {
    
}