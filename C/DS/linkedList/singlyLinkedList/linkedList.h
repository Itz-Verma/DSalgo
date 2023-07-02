#include "node.h"
#include <stdlib.h>
struct Node* createNode(int data);

struct Node* insert (struct Node* head, size_t index, int data);

struct Node* deleteNode (struct Node* head, size_t index);

void displayList (struct Node*);

void displayReversedList (struct Node*);

struct Node* reverse(struct Node*);

struct Node* sort(struct Node*);
