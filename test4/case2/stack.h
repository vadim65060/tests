//
// Created by vadim on 28.03.2022.
//

#ifndef LAB25_4_STACK_H
#define LAB25_4_STACK_H

typedef struct Stack Stack;
typedef struct Node Node;
struct Node {
    int value;
    Node *back, *next;
};
struct Stack {
    size_t len;
    Node *first, *last;
    Node *current;
};

Stack *StackInit();

void NodeDelete(Stack *stack, Node *node);

Node *Push(Stack *stack, int value);

int Pop(Stack *stack);

int Back(Stack *stack);

void StackDelete(Stack *stack);

void StackToStr(Stack *stack, char *str, int maxSize);

#endif //LAB25_4_STACK_H
