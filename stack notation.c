#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char items[MAX_SIZE];
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, char item) {
    if (isFull(stack)) {
        printf("Stack Overflow!\n");
        return;
    }
    stack->items[++stack->top] = item;
}

char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow!\n");
        return '\0';
    }
    return stack->items[stack->top--];
}

int precedence(char operator) {
    if (operator == '+' || operator == '-')
        return 1;
    if (operator == '*' || operator == '/')
        return 2;
    return 0;
}

void infixToPostfix(char *expression) {
    struct Stack stack;
    initialize(&stack);
    char postfix[MAX_SIZE] = "";
    int j = 0;

    for (int i = 0; expression[i]; i++) {
        char c = expression[i];
        if (c >= 'a' && c <= 'z') {
            postfix[j++] = c;
        } else if (c == '(') {
            push(&stack, c);
        } else if (c == ')') {
            while (!isEmpty(&stack) && stack.items[stack.top] != '(') {
                postfix[j++] = pop(&stack);
            }
            pop(&stack); 
        } else {
            while (!isEmpty(&stack) && precedence(c) <= precedence(stack.items[stack.top])) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, c);
        }
    }

    while (!isEmpty(&stack)) {
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0';
    printf("Postfix Notation: %s\n", postfix);
}

int main() {
    char infixExpression[MAX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infixExpression);
    infixToPostfix(infixExpression);
    return 0;
}
