#include <stdio.h>
#include "stack.h"

int cmp(Node *node) {
    return node->value % 2;
}

int StackErase(Stack *stack, int (*cmp)(Node *)) {
    Node *node = stack->last;
    int k = 0;
    while (node != NULL) {
        Node *temp = node->back;
        if (cmp(node)) {
            NodeDelete(stack, node);
            k++;
        }
        node = temp;
    }
    return k;
}

int main() {
    Stack *stack = StackInit();
    printf("nums count:");
    int n;
    scanf("%i", &n);
    printf("nums:");
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%i", &temp);
        Push(stack, temp);
    }
    StackErase(stack, cmp);
    StackToStr(stack, NULL, 9999);
}
