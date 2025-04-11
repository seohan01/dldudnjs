#include <stdio.h>
#include <string.h>

#define MAX 20000

int deque[MAX];
int front = MAX / 2;
int back = MAX / 2;

void push_front(int x) {
    deque[--front] = x;
}

void push_back(int x) {
    deque[back++] = x;
}

int pop_front() {
    if (front == back) return -1;
    return deque[front++];
}

int pop_back() {
    if (front == back) return -1;
    return deque[--back];
}

int size() {
    return back - front;
}

int empty() {
    return front == back ? 1 : 0;
}

int get_front() {
    if (front == back) return -1;
    return deque[front];
}

int get_back() {
    if (front == back) return -1;
    return deque[back - 1];
}

int main() {
    int n;
    scanf("%d", &n);

    char cmd[20];

    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);

        if (strcmp(cmd, "push_front") == 0) {
            int x;
            scanf("%d", &x);
            push_front(x);
        }
        else if (strcmp(cmd, "push_back") == 0) {
            int x;
            scanf("%d", &x);
            push_back(x);
        }
        else if (strcmp(cmd, "pop_front") == 0) {
            printf("%d\n", pop_front());
        }
        else if (strcmp(cmd, "pop_back") == 0) {
            printf("%d\n", pop_back());
        }
        else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", size());
        }
        else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", empty());
        }
        else if (strcmp(cmd, "front") == 0) {
            printf("%d\n", get_front());
        }
        else if (strcmp(cmd, "back") == 0) {
            printf("%d\n", get_back());
        }
    }

    return 0;
}
