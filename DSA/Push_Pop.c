#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct { int t, it[MAX]; } Stk;

void init(Stk* s) { s->t = -1; }
int isFull(Stk* s) { return s->t == MAX - 1; }
int isEmpty(Stk* s) { return s->t == -1; }

void push(Stk* s, int v) {
    if (isFull(s)) printf("Full\n");
    else s->it[++(s->t)] = v;
}

int pop(Stk* s) {
    if (isEmpty(s)) return printf("Empty\n"), -1;
    return s->it[(s->t)--];
}

void display(Stk* s) {
    if (isEmpty(s)) printf("Empty\n");
    else for (int i = s->t; i >= 0; i--) printf("%d\n", s->it[i]);
}

int main() {
    Stk s;
    init(&s);
    int ch, v;

    while (1) {
        printf("\n1.Push \n2.Pop \n3.Display \n4.Exit\n");
        printf("Choice: "); scanf("%d", &ch);

        if (ch == 1) {
            printf("Value: "); scanf("%d", &v);
            push(&s, v);
        } else if (ch == 2) {
            v = pop(&s);
            if (v != -1) printf("Popped %d\n", v);
        } else if (ch == 3) display(&s);
        else if (ch == 4) exit(0);
        else printf("Invalid\n");
    }
}
